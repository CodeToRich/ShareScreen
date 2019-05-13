/**
*屏幕分享接口文件，
*您可以使用并修改本代码
*命名规范 类都已C开头，结构体都已S开头
*/

namespace EniacShareScreen
{
  struct SParameter
  {
    int x;
    int y;
    int width;
    int high;
    //TODO 以后可以加入帧率
    char ip[16]; //ACSII 编码
    int portCounter;
    short port[1];
  };
  
  class CShareScreenService
  {
    /**
    *作用:  开始分享屏幕
    *参数： 见SParameter
    *返回值:0成功；-1失败 
    **/
    virtual int StartService(S_parameter* input) = 0;
    
    /**
    *作用:  停止分享屏幕，释放资源
    *参数： none
    *返回值:总是返回0
    **/
    virtual int StopService() = 0;
  };
  
  class CShareScreenClient
  {
    /**
    *使用方式：循环调用本接口，每次调用返回一帧，存在frameBuf中
    *作用:  接收服务端的屏幕分享
    *参数： //TODO 明天再整
    *返回值:0成功接收一帧；-1异常；1：服务端停止 
    **/
    virtual int StartClient() = 0;
    
    /**
    *作用:  停止接收服务端分享，释放资源
    *参数： none
    *返回值:总是返回0
    **/
    virtual int StopClient() = 0;
  }
  
}