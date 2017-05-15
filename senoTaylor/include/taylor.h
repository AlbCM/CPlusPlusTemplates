#ifndef TAYLOR_H
#define TAYLOR_H
#include <cmath>
#include <iostream>

using namespace std;

class taylor
{
    public:
        taylor();
        virtual ~taylor();

        int factorial(){
            int fact;
            fact=1;
            for(int i=0;i<=n;i++){
                fact=fact*i;
                }
                return fact;
        }

    void pedirdatos(){
     cout<<"Digite x"<<endl;
        cin>>x;
    }
    long double seno()
    {
        x = fmod(x, M_PI * 2);

        long double resultado = x;
        long double termino = x;

        int limit = 30;
        int sign = -1;

        for(int i = 3 ; i < limit; i += 2, sign = -sign)
            resultado += termino = -termino * x * x / (i * (i - 1));

        return resultado;
    }
    private:
        int n;
        double x;
};

#endif // TAYLOR_H
