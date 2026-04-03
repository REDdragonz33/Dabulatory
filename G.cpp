#include <iostream>


int main()
{
    const double Pi = 3.14;
    double r,angle,square,len,SquareSector;

    std::cout<<"Введите сначала радиус и угл кругового сектора"<<std::endl;                    
    std::cin>>r>>angle;
                                                                //ввод радиуса и угла кругового сектора
    if ((angle > 0) && (angle < 360)){                          //супер проверка
        if (r > 0){

            len = 2 * Pi * r;
            square = Pi * r * r;
            SquareSector = square * (angle/360);
            std::cout<<"Длина окружности: "<<len<<std::endl;
            std::cout<<"Площадь окружности: "<<square<<std::endl;
            std::cout<<"Площадь сектора окружности: "<<SquareSector<<std::endl;
        }else{
            std::cout<<"ERROR!!!!(радиус)"<<std::endl;
        } 
    }else{
            std::cout<<"ERROR!!!!(угл)"<<std::endl;
        }

    

return 0;
}
