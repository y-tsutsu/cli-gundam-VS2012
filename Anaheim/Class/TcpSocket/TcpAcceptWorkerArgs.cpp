#include "StdAfx.h"
#include "TcpAcceptWorkerArgs.h"

using namespace Anaheim;
using namespace Anaheim::TcpSocket;

/**
 * 接続時受け渡しパラメータ
 */
TcpAcceptWorkerArgs::TcpAcceptWorkerArgs(Anaheim::TcpSocket::TcpEventArgs ^tcpArgs, System::Net::Sockets::TcpClient ^client)
{
	this->tcpArgs = tcpArgs;
	this->client = client;
}
// ----------------------------------------------------------------------------------------------------