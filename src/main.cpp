#include <iostream>

int main()
{
   std::setlocale(LC_ALL, "RUS");
   float num1, num2, res;
   std::cout << "введите первое число: ";
   std::cin >> num1;

   std::cout << "введите второе число: ";
   std::cin >> num2;

   char math;
   std::cout << "введите операцию: ";
   std::cin >> math;

   // if(math == '+')
   //    res = num1 + num2;
      
    
   
   // else if(math == '-')
   //     res = num1 - num2;

   //    else if(math == '*')
   //    res = num1 * num2;

   //    else if(math == '/')
   // //    res = num1 / num2;

   switch(math)
   {
      case '+': res = num1 + num2; break;
      case '-': res = num1 - num2; break;
      case '*': res = num1 * num2; break;
      case '/': res = num1 / num2; break;
      
      
  




   }

      std::cout << "Результат: " << res <<std::endl;
      
   

   



    
    return 0;

   }





