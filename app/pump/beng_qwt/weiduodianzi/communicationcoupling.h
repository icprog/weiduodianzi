#ifndef COMMUNICATIONCOUPLING_H
#define COMMUNICATIONCOUPLING_H

#include <QObject>
#include "Communication/Device.h"
#include "Communication/LogicThread.h"

class MachineStat;

class CommunicationCoupling : public QObject
{
	Q_OBJECT

public:
	CommunicationCoupling(MachineStat *parent);
	~CommunicationCoupling();

	void sendMcuCmd(quint8, quint32, quint32);				//����MCU����;
	void sendCmd(quint8, quint32, quint32);					//������λ������;

	void setPcProtocol(int idx);							//������λ����ͨѶЭ��;
	void setPumpTypeForPcFlowCtrl(int nPump);						//���ñ��ͣ����Ͳ�ͬ����λ���������ٿ����ֳ��Ȳ�ͬ;

private:
	Worker *m_pWorker;										//��̨�߼�����;
	MachineStat *m_pMachine;								//����״̬;

	void initCommunication();								//ͨѶ��ʼ��;

private slots:
	void processCmd4Mcu(quint8 type, quint32 cmd, quint32 arg,quint32 add);
	void processCmd4Pc( quint8 type, quint32 cmd, quint32 arg,quint32 add);
	void communicationError(int reSend);
	
signals:
	void mcuCmdSend(quint8, quint32, quint32);
	void cmdSend(quint8, quint32, quint32);

};

#endif // COMMUNICATIONCOUPLING_H