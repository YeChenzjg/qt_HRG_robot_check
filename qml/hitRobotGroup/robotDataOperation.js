//删除操作标志
var changeFlag = 0;
//添加机器人model
function addRobotModelData(model, t_data){
    var objdata = JSON.parse(t_data)
    if(changeFlag)
        return ;
    for(var i = 0; i < model.count; i++){
        if(objdata.rob_num === model.get(i).rob_num){
            model.set(i,{"rob_x":objdata.rob_x,
                          "rob_y":objdata.rob_y,"rob_round":objdata.rob_round,"rob_IDCard":objdata.rob_IDCard,
                          "rob_CPU_idle":objdata.rob_CPU_idle,"rob_forward_speed":objdata.rob_forward_speed,
                          "rob_turn_speed":objdata.rob_turn_speed,"rob_car_status":objdata.rob_car_status,
                          "rob_car_status_machine":objdata.rob_car_status_machine,
                          "rob_ms_position":objdata.rob_ms_position,"rob_power":objdata.rob_power,"rob_forbiden":objdata.rob_attr,
                          "rob_error_id":objdata.rob_error_id,"offline":0,"rob_leftoff":isOff(0,objdata.rob_error_id),
                          "rob_rightoff":isOff(1,objdata.rob_error_id)})
            break;
        }
    }
    if(i === model.count){
        model.append({"rob_num":objdata.rob_num,"rob_x":objdata.rob_x,
                         "rob_y":objdata.rob_y,"rob_round":objdata.rob_round,"rob_IDCard":objdata.rob_IDCard,
                         "rob_CPU_idle":objdata.rob_CPU_idle,"rob_forward_speed":objdata.rob_forward_speed,
                         "rob_turn_speed":objdata.rob_turn_speed,"rob_car_status":objdata.rob_car_status,
                         "rob_car_status_machine":objdata.rob_car_status_machine,
                         "rob_ms_position":objdata.rob_ms_position,"rob_power":objdata.rob_power,"rob_forbiden":objdata.rob_attr,
                         "rob_error_id":objdata.rob_error_id,"offline":0,"rob_leftoff":isOff(0,objdata.rob_error_id),
                         "rob_rightoff":isOff(1,objdata.rob_error_id)})
    }
    gc()
}
//显示断线机器人
function setOffLineStatus(model, num){
    changeFlag = 1;
    for(var i = 0; i < model.count; i++){
        if(num === model.get(i).rob_num){
            model.set(i,{"offline":1})
            gc()
        }
    }
    changeFlag = 0;
}
//清除断线机器人的model data
function clearOffLine(model){
    changeFlag = 1;
    var count = 0;
    for(var i = 0 ; i < model.count; i++){
        if(model.get(i).offline){
            model.remove(i, 1)
            i = i - 1
            gc()
        }
        i = i < 0?0:i
    }
    if(model.count === 0)
        model.clear()
    changeFlag = 0;
}
//判断轮子是否断线
function isOff(num, data){
    if(num === 0)//左轮
        return (Number(data)&0x0f)===0x0f?1:0
    if(num === 1)//右轮
        return (Number(data)&0xf0)===0xf0?1:0
}

//获取机器人小车状态
function carState(code){
    var info = settings.node("s"+code)
    if(info === "undefined")
        return "未定义"
    return info
}

//获取机器人状态机
function carSM(code){
    var info = settings.node("sm"+code)
    if(info === "undefined")
        return "未定义"
    return info
}

//获取机器人错误状态
function carError(code){
    var flag = 0;
    var errorMsg = "" ;
    if((code & 0x0f) === 0x0f){
        errorMsg += "左轮断线\n";
        flag = 2
    }
    if((code& 0xf0) === 0xf0){
        errorMsg += "右轮断线\n"
        flag = 2
    }
    if(flag != 2){
        if((code & 0x03) === 1){
            errorMsg += "左轮未学习\n"
            flag = 1
        }
        if((code & 0x03) === 2){
            errorMsg += "左轮轮子堵转\n"
            flag = 1
        }
        if((code & 0x03) === 3){
            errorMsg += "左轮霍尔错误\n"
            flag = 1
        }
        if(((code >> 2) & 0x03) === 1){
            errorMsg += "右轮未学习\n"
            flag = 1
        }
        if(((code >> 2) & 0x03) === 2){
            errorMsg += "右轮轮子堵转\n"
            flag = 1
        }
        if(((code >> 2) & 0x03) === 3){
            errorMsg += "右轮霍尔错误\n"
            flag = 1
        }
        if(((code >> 4) & 0x01) === 1){
            errorMsg += "紧急制动\n"
            flag = 1
        }
        if(((code >> 5) & 0x01) === 1){
            flag = 1
            errorMsg += "ID读卡器异常\n"
        }
        if(((code >> 6) & 0x01) === 1){
            errorMsg += "AGV传感器异常\n"
            flag = 1
        }
        if(((code >> 7) & 0x01) === 1){
            errorMsg += "超声波异常\n"
            flag = 1
        }
    }
    if(flag === 0)
        errorMsg = "正常"
    return errorMsg;
}

//浮点数格式化主调函数
function formatfloat(f,size)
{
var tf=formatfloat1(f,size);
var sf=""+tf;
//alert(tf);
return formatfloat2(sf,size);
}

//对浮点数格式化，防止出现0.99999998的现象(f为浮点数，size中保留小数位数)
function formatfloat1(f,size)
{
    var tf=f*Math.pow(10,size);
    tf=Math.round(tf+0.000000001);
    tf=tf/Math.pow(10,size);
    return tf;
}

//格式化浮点数字符串，保证其有给定的小数位数。其中f是浮点数的字符串常量，size是保留小数位数
function formatfloat2(f,size)
{
    var aa=f.split("");
    var varchar="";
    var num=0,k=0; //num是已得小数点位数，K用来作是否到小数点控制
    for(var i=0;i<aa.length;i++)
    {
       varchar+=aa[i];
       if(aa[i] === ".")
       {
        k=1;
       }
       if(k==1)
       {
        num++;
        if(num > size) break;
       }

    }
    if(size === 0)
        return varchar;
    if(num === 0){
        varchar += "." //如果是整数,补小数点
        num++;
    }
    num--;
    for(;num<size;num++) //如果位数不够，则补0
    {
       varchar+="0";
    }

    return varchar;
}
//16进制补位
function padLeft(str, pad, count){
    while(str.length<count)
    str=pad+str;
    return str;
}
