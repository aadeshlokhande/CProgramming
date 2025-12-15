// **************** While Loop ****************

// syntax

// while (condition)
// {
//     code;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=10)
//     {
//         printf("Hello... ");
//         ++a;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c,con = 1;
//     while(con==1)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         c = a + b;
//         printf("ans = %d\n",c);
//         printf("do you want to continue(1/0) = ");
//         scanf("%d",&con);
//     }
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int num = 3;
//     while(num>=0)
//     {
//         printf("Enter a -ve number = ");
//         scanf("%d",&num);   
//     }
//     printf("Thanks for entring -ve number");
//     return 0;
// }


// enter a -ve number = 4
// enter a -ve number = 6
// enter a -ve number = 0
// enter a -ve number = 4334
// enter a -ve number = -7
// thank for entering -ve number


// #include<stdio.h>
// int main()
// {
//     int flag = 0, num;
//     while(flag==0)
//     {
//         printf("Enter a -ve number = ");
//         scanf("%d",&num);
//         if(num<=0)
//         {
//             flag=1;
//         }
//     }
//     printf("thank for entering -ve number");
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// enter a number = 3
// enter a number = 2
// enter a number = 5
// enter a number = 4
// enter a number = 1
// enter a number = 3
// enter a number = 6
// enter a number = 0
// total sum = 24

// #include <stdio.h>
// int main()
// {
//     int con = 0, num1, num2 = 0;
//     while( con == 0)
//     {
//         printf("Enter a number =");
//         scanf("%d", &num1);
//         num2 = num2 + num1;
//         if (num1 == 0)
//         {
//             con = 1;
//         }
//     }
//     printf("The sum is %d ", num2);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int totalSum = 0, num = 23;
//     while (num!= 0)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&num);
//         totalSum =totalSum + num;
//     }
//     printf("totalSum = %d",totalSum);
//     return 0;
// }


// #################################################
// #################### HOMEWORK ###################
// #################################################
// Q1. while loop kya hota hai C language me?
// Answer: while loop ek control structure hai jo tab tak code repeat karta hai jab tak condition true hoti hai. Pehle condition check hoti hai, phir loop execute hota hai.

// Q2. while loop ka use karke 1 se 10 tak numbers print karne ka program likhiye.
// Answer: Isme ek counter variable 1 se start hota hai aur jab tak value 10 se chhoti ya barabar ho tab tak print hota hai.

// Q3. while loop ka use karke 10 se 1 tak reverse counting print kijiye.
// Answer: Isme counter 10 se start hota hai aur har iteration me 1 se decrement hota hai jab tak value 1 tak na aa jaye.

// Q4. while loop ka use karke kisi number ka table print kijiye.
// Answer: User se number input leke loop ke andar us number ko 1 se 10 tak multiply karke print kiya jata hai.

// Q5. while loop ka use karke kisi number ka sum of digits nikaliye.
// Answer: Number ke last digit ko % operator se nikala jata hai aur har baar number ko 10 se divide karke sum calculate hota hai.

// Q6. while loop ka use karke kisi number ka factorial nikaliye.
// Answer: Loop ke andar number ko 1 se multiply karte hue factorial calculate kiya jata hai jab tak number 1 na ho jaye.

// Q7. while loop ka use karke even numbers 1 se 50 tak print kijiye.
// Answer: Counter 1 se start hota hai aur condition ke andar check hota hai ki number even hai ya nahi.

// Q8. while loop ka use karke kisi number ka reverse nikaliye.
// Answer: Har iteration me last digit nikal kar new number banaya jata hai jab tak original number 0 na ho jaye.

// Q9. while loop ka use karke check kijiye ki number palindrome hai ya nahi.
// Answer: Number ka reverse bana kar usko original number se compare kiya jata hai.

// Q10. while loop ka use karke user se numbers input lete rahiye jab tak user -1 enter na kare.
// Answer: Loop tab tak chalta hai jab tak input value -1 ke equal na ho, aur har valid input process hota rehta hai.

// Q11. while loop ka use karke 1 se N tak natural numbers ka sum nikaliye.
// Answer: Counter 1 se start hota hai aur har number ko sum me add kiya jata hai jab tak counter N tak pahunch jaye.

// Q12. while loop ka use karke kisi number ke digits count kijiye.
// Answer: Number ko bar-bar 10 se divide kiya jata hai aur har division par count increase hota hai.

// Q13. while loop ka use karke check kijiye number Armstrong hai ya nahi.
// Answer: Har digit ka cube nikal kar sum kiya jata hai aur original number se compare hota hai.

// Q14. while loop ka use karke Fibonacci series ke first N terms print kijiye.
// Answer: Do variables se start karke har step me next term previous do terms ka sum hota hai.

// Q15. while loop ka use karke kisi number ka power calculate kijiye.
// Answer: Loop ke andar base ko baar-baar multiply karke power nikali jati hai.

// Q16. while loop ka use karke check kijiye number prime hai ya nahi.
// Answer: Number ko 2 se lekar n/2 tak divide karke divisibility check hoti hai.

// Q17. while loop ka use karke 1 se 100 ke beech ke odd numbers print kijiye.
// Answer: Counter 1 se start hota hai aur har iteration me 2 se increment hota hai.

// Q18. while loop ka use karke user ke diye gaye numbers ka average nikaliye.
// Answer: Numbers ka sum aur count maintain karke loop ke baad average calculate hota hai.

// Q19. while loop ka use karke kisi number ke factors print kijiye.
// Answer: Loop 1 se number tak chalta hai aur jo value divide kare use print kiya jata hai.

// Q20. while loop ka use karke smallest digit find kijiye.
// Answer: Har digit compare karke minimum digit store ki jati hai.

// Q21. while loop ka use karke largest digit find kijiye.
// Answer: Number ke har digit ko check karke maximum digit nikali jati hai.

// Q22. while loop ka use karke decimal number ko binary me convert kijiye.
// Answer: Number ko 2 se divide karke remainders store kiye jate hain.

// Q23. while loop ka use karke binary number ko decimal me convert kijiye.
// Answer: Har digit ko power of 2 se multiply karke sum nikala jata hai.

// Q24. while loop ka use karke multiplication without * operator kijiye.
// Answer: Ek number ko dusre number ke times add karke result nikala jata hai.

// Q25. while loop ka use karke division without / operator kijiye.
// Answer: Repeated subtraction se quotient calculate hota hai.

// Q26. while loop ka use karke GCD of two numbers nikaliye.
// Answer: Chhote number se start karke common divisors check kiye jate hain.

// Q27. while loop ka use karke LCM of two numbers nikaliye.
// Answer: Dono numbers ke multiples check karke first common multiple liya jata hai.

// Q28. while loop ka use karke strong number check kijiye.
// Answer: Har digit ka factorial nikal kar sum kiya jata hai.

// Q29. while loop ka use karke perfect number check kijiye.
// Answer: Proper divisors ka sum original number ke equal ho to perfect number hota hai.

// Q30. while loop ka use karke user se positive number hi accept kijiye.
// Answer: Jab tak user positive number enter nahi karta tab tak loop repeat hota rehta hai.
