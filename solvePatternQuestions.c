
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include<stdio.h>
// void main(){
//     for(int i=0; i<5; i++){
//         for(int n=0; n<=5; n++){
//             printf(" *");
//         }
//         printf("\n");
//     }
// }
// *
// * *
// * * *
// * * * *

// #include<stdio.h>
// void main(){

//   for(int i=0;i<5; i++){
//       for(int n =0; n<i; n++){
//           printf(" *");
//       }
//       printf(" \n");
//   }
// }

// * * * * *
// * * * *
// * * *
// * *
// *
//  #include<stdio.h>
//  void main(){
//   int row=5;
//   for (int i=row; i>0; i--){
//     for(int j=0; j<i; j++){
//       printf(" *");
//     }
//     printf("\n");
//   }
//  }



//     *
//    **
//   ***
//  ****
// *****

// #include<stdio.h>
// void main (){
//   int row=5;
//   for (int i=0; i<row; i++){
//     for(int s=0; s<=row-i+1; s++){
//       printf(" ");
//     }
//     for(int j=0; j<i+1; j++){
//       printf("*");
//     }
//     printf("\n");
//   }
// }


// 12345
// 1234
// 123
// 12
// 1

//  #include<stdio.h>
//         void main (){
//             int num=5;
//             for(int n=0; n<num; n++){
//                 for(int number=0;number<num-n; number++){
//                     printf(" %d", number+1);
//                 }
//                 printf("\n");
//             }
//         }


//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include<stdio.h>
// void main (){
//   int row=5;
//   for(int i=0; i<row; i++){
//     for(int n=0; n<row-i; n++){
//       printf(" ");
//     }
//     for(int col=0; col<i+1; col++){
//       printf(" *");
//     }
//     printf("\n");
//   }
// }

    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    //   #include<stdio.h>
    // void main(){
    //     int row=5;
    //     for(int i=0; i<row; i++){
    //         for(int n=0; n<i+1; n++){
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    //     for(int i=row; i>=0; i--){
    //         for(int n=0; n<i+1; n++){
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    // }

//             *
//          *     *
//        *         *
//      *             *
//    *                 *
//  *                     *
//    *                 *
//      *             *
//        *         *
//          *     *
//             *

    
    // #include<stdio.h>
    // void main (){
    //     int row=5;
    //     for (int i=0; i<row; i++){
    //         if(i==0){
    //             printf(" ");
    //         }
    //         for(int n=0; n<row-i; n++){
    //             printf("  ");
    //         }
    //         printf(" *");
    //          for(int j=0;j<2*i;j++){
    //             printf( "  ");
    //         }
    //         if(i>0)
    //         printf( " *");

    //         printf("\n");
    //     }

    //     for (int i=row; i>=0; i--){
    //         if(i==0){
    //             printf(" ");

    //         }
    //         for(int n=0; n<row-i; n++){
    //             printf("  ");
            
    //         }
            
    //         printf(" *");
    //          for(int j=0;j<2*i;j++){
    //             printf("  ");
    //         }
    //         if(i>0)
    //         printf(" *");

    //         printf("\n");
    //     }
        
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    #include<stdio.h>
    void main (){
        int row=10;
        for(int i=1; i<=row; i++){
            for (int n=1; n<=i; n++){
                printf(" %d", n);
            }
            printf("\n" );
        }
    }