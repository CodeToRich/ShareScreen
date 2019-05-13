/**
*��Ļ����ӿ��ļ���
*������ʹ�ò��޸ı�����
*�����淶 �඼��C��ͷ���ṹ�嶼��S��ͷ
*/

namespace EniacShareScreen
{
  struct SParameter
  {
    int x;
    int y;
    int width;
    int high;
    //TODO �Ժ���Լ���֡��
    char ip[16]; //ACSII ����
    int portCounter;
    short port[1];
  };
  
  class CShareScreenService
  {
    /**
    *����:  ��ʼ������Ļ
    *������ ��SParameter
    *����ֵ:0�ɹ���-1ʧ�� 
    **/
    virtual int StartService(S_parameter* input) = 0;
    
    /**
    *����:  ֹͣ������Ļ���ͷ���Դ
    *������ none
    *����ֵ:���Ƿ���0
    **/
    virtual int StopService() = 0;
  };
  
  class CShareScreenClient
  {
    /**
    *ʹ�÷�ʽ��ѭ�����ñ��ӿڣ�ÿ�ε��÷���һ֡������frameBuf��
    *����:  ���շ���˵���Ļ����
    *������ //TODO ��������
    *����ֵ:0�ɹ�����һ֡��-1�쳣��1�������ֹͣ 
    **/
    virtual int StartClient() = 0;
    
    /**
    *����:  ֹͣ���շ���˷����ͷ���Դ
    *������ none
    *����ֵ:���Ƿ���0
    **/
    virtual int StopClient() = 0;
  }
  
}