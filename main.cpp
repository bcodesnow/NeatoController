#include <iostream>
#include "../RaspiSerial/raspiserial.h"
#include "../TCPServerM/tcpreceiver.h"

using namespace std;

int main()
{
    std::cout << "Neato Controller - Starting Up!" << endl;
    TCPReceiver tcr;
    RaspiSerial rs(115200);
    tcr.set_ref_to_raspiSerial(&rs);

    while (1)
    {
        sleep(1);
    }
}
