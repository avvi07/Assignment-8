//                                        Write a program to draw the following patterns:

//1. *
//   * *
//   * * *
//   * * * *
//   * * * * *

// #include <stdio.h>
// int main()
// {
//     int i,j;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if (j <= i)
//             {
//                 printf(" *");
//             }
//             else
//             {
//                 printf("");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 2.        *
//         * *
//       * * *
//     * * * *
//   * * * * * 

// #include<stdio.h>
// int main()
// {
//     int i,j;
    
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 5; j++)
//         {
//             if (j>=6-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// 3. * * * * * 
//    * * * *
//    * * * 
//    * * 
//    * 

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 5; j++)
//         {
//             if (j<=6-i)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 4. * * * * * 
//      * * * * 
//        * * *
//          * *
//            *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 5; j++)
//         {
//             if (j>=i)
//             {
//                 printf(" *");
//             }
//             else
//             {
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 5.         *
//          * * *
//        * * * * *
//      * * * * * * *
//    * * * * * * * * *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 0; j <= 10; j++)
//         {
//             if (j>=7-i && j<=5+i)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }

//         }
//         printf("\n");
//     }

//     return 0;
// }

// 6.  * * * * * * * * *
//       * * * * * * *
//         * * * * *
//           * * *
//             *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 0; i <= 4; i++)
//     {
//         for ( j = 0; j <= 8; j++)
//         {
//             if (j>=i && j<=8-i)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 7. * * * * * * * * * *
//    * * * *     * * * *
//    * * *         * * *
//    * *             * *
//    *                 *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 0; i <= 4; i++)
//     {
//         for ( j = 0; j <= 9; j++)
//         {
//             if ((j>=0 && j<=4-i) || (j>=5+i && j<=9))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 8.   1
//     121
//    12321
//   1234321

// #include<stdio.h>
// int main()
// {
//     int i,j,count = 0;

//     for ( i = 0; i <= 3; i++)
//     {
//         count = 0;
//         for ( j = 0; j <= (3-i); j++)
//         { 
//             printf(" ");
//         }

//         for ( j = 0; j <= i; j++)
//         {
//             printf("%d",++count);
//         }
//         count--;
//         while (count)
//         {
//             printf("%d",count--);
//         }
        
//         printf("\n");   
        
//     }
    
//     return 0;
// }

// 9. 1234321
//     12321
//      121
//       1

// #include<stdio.h>
// int main()
// {
//     int i,j,count = 0;

//     for ( i = 0; i <= 3; i++)
//     {
//         count = 0;
//         for ( j =1+i ; j >=2 ; j--)
//         {
//             printf(" ");
//         }
        
//         for ( j =3 ; j >= i; j--)
//         {
//             printf("%d",++count);
//         }
//         count--;
//         while (count!=0)
//         {
//             printf("%d",count--);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
 
// 10. 1 2 3 4 3 2 1
//     1 2 3   3 2 1
//     1 2       2 1
//     1           1

// #include<stdio.h>
// int main()
// {
//     int i,j,count = 0;

//     for ( i = 0; i <=3; i++)
//     {
//         count = 0;
//         for ( j =3 ; j >= i; j--)
//         {
//             printf("%d ",++count);
//         }
        
//         for ( j = 2+i; j >=4-i; j--)
//         {
//             printf("  ");
//         }
//         if (i == 0)
//         {
//             --count;
//         }
        
//         while (count!=0)
//         {
//             printf("%d ",count--);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// 11.        A
//          A B A
//        A B C B A
//      A B C D C B A
//    A B C D E D C B A  

// #include<stdio.h>
// int main()
// {
//     int i,x,j,count=1;


//     for ( i = 0; i <= 4; i++)
//     {
//         count=1;
//         for ( j = 0; j <= (4-i); j++)
//         { 
//             printf(" ");
//         }

//         for ( j = 0; j <= i; j++)
//         {
//             printf("%c",count+64);
//             ++count;
//         }
//         count = count-2;
//         for ( j = i; count>=1; j--)
//         {
//             printf("%c",count+64);
//             count--;
//         }
        
//         printf("\n");   
        
//     }
    
//     return 0;
// }

// 12. A B C D C B A
//       A B C B A
//         A B A
//           A

// #include<stdio.h>
// int main()
// {
//     int i,j,count = 1;

//     for ( i = 0; i <= 3; i++)
//     {
//         count = 1;
//         for ( j =1+i ; j >=2 ; j--)
//         {
//             printf("  ");
//         }
        
//         for ( j =3 ; j >= i; j--)
//         {
//             printf("%c ",count+64);
//             count++;
//         }
//         count=count-2;
//         while (count!=0)
//         {
//             printf("%c ",count+64);
//             count--;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 13. A B C D E F G F E D C B A
//     A B C D E F   F E D C B A
//     A B C D E       E D C B A
//     A B C D           D C B A
//     A B C               C B A
//     A B                   B A
//     A                       A

// #include<stdio.h>
// int main()
// {
//     int i,j,count=0;

//     for ( i = 1; i <= 7; i++)
//     {
//         count=0;
//         for ( j = 7; j >= i; j--)
//         {
//             printf("%c ",count+65);
//             count++;
//         }
        
//         for ( j = 5+i; j >=9-i ; j--)
//         {
//             printf("  ");   
//         }
        
//         if (i == 1)
//         {
//             --count;
//         }
        
        
//     for ( j = 7; count!=0; --count)
//     {
//         printf("%c ",count+64);
//     }
    
//         printf("\n");
        
//     }
    
//     return 0;
// }

// 14. *
//     *  *
//     *     *
//     *       *
//     * * * * * *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//                 if ( j==1 || i==j || i==5)
//                 {
//                     printf("* ");
//                 }
//                 else
//                 {
//                     printf("  ");
//                 }

//         }
//         printf("\n");
//     }

//     return 0;
// }

// 15.         * 
//           * *
//         *   *
//       *     *
//     * * * * *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 5; j++)
//         {
//             if (j==6-i || j==5 || i==5)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 16.       *
//         *   *
//       *       *    
//     *           *
//   * * * * * * * * *

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 10; j++)
//         {
//            for ( j = 1; j <= 5; j++)
//            { 
//             if (j==6-i )
//             {
//                 printf("* ");
//             }
//             else if (i==5 && j<=5)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//            }
//            for (j = 2; j <= 9; j++)
//            {
//                if (i == j )
//                {
//                    printf("* ");
//                }
//                else if (i == 5 && j < 5)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 17. * * * * * * * * *
//       *           *
//         *       *    
//           *   *
//             *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 10; j++)
//         {
//             for ( j = 1; j <= 6; j++)
//             {
//                 if (i==1 && (j>= 2 && j<= 6))
//                 {
//                     printf(" *");
//                 }
//                 else if (j==1+i)
//                 {
//                     printf(" *");
//                 }
//                 else
//                 {
//                     printf("  ");
//                 }
//             }
            
//             for ( j = 5; j <= 9; j++)
//             {
//                 if (i==1 && (j>= 5 && j<= 8))
//                 {
//                     printf(" *");
//                 }
//                 else if (j==9-i)
//                 {
//                     printf(" *");
//                 }
//                 else
//                 {
//                     printf("  ");
//                 }
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 18.       *
//         * * *
//       * * * * *    
//     * * * * * * *
//   * * * * * * * * *
//     * * * * * * * *
//       * * * * * *    
//         * * *
//           *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 5; i++)
//     {
//         for ( j = 1; j <= 9; j++)
//         {
//             if ((j>=6-i && j<= 4+i))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
                   
//         }
//         printf("\n");
//     }
//     for ( i = 1; i <=4; i++)
//     {
//        for ( j = 1; j <= 9; j++)
//         {
//             if (j>=1+i && j<=9-i)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
                   
//         }
//         printf("\n");
    
//     } 
//     return 0;
// }

// 19.    * * * * *           * * * * *
//      * * * * * * *       * * * * * * *
//    * * * * * * * * *   * * * * * * * * *
//    * * * * * *   MySirG  * * * * * * * *
//      * * * * * * * * * * * * * * * * *
//        * * * * * * * * * * * * * * *
//          * * * * * * * * * * * * *
//            * * * * * * * * * * *
//              * * * * * * * * *
//                * * * * * * * 
//                  * * * * *
//                    * * * 
//                      *

// #include<stdio.h>
// int main()
// {
//     int i,j;

//     for ( i = 1; i <= 3; i++)
//     {
//         for ( j = 1; j <= 19; j++)
//         {
//             if ((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }       
//         }
//         printf("\n");
//     }
//     for ( i = 1; i <= 10; i++)
//     {
//         for ( j = 1; j <= 19; j++)
//         {
//             if (i==1 && j == 9 )
//             {
//                 printf("  MySirG  ");
//             }
            
//             if (i == 1 && (j>=8 && j<= 12))
//             {
//                 continue;
//             }
            
//             if (j>=i && j<=20-i)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }