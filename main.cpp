#include<iostream>
#include<iomanip>
#include"examples/all.h"

using namespace std;

int main(int argc,const char *argv[])
{
    cout << "Hello World!" << endl << setprecision(15);
//

    if (argc==2 && string(argv[1])=="tb")
        TestHamiltonianTB();
    if (argc==4 && string(argv[1])=="hubbard" && string(argv[2])=="basic")  // ./a.out hubbard basic U
    {
        double U=atof(argv[3]);
        TestHubbardBasic(U);
    }
    else if (argc==7 && string(argv[1])=="hubbard" && string(argv[2])=="quench") // ./a.out hubbard quench U1 U2 dt nt
    {
        double U1=atof(argv[3]);
        double U2=atof(argv[4]);
        double dt=atof(argv[5]);
        int nt=atoi(argv[6]);
        TestHubbardQuench(U1,U2,dt,nt);
    }
    return 0;
}
