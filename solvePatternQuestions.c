
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

#include<stdio.h>
void main (){
  int row=5;
  for(int i=0; i<row; i++){
    for(int n=0; n<row-i; n++){
      printf(" ");
    }
    for(int col=0; col<i+1; col++){
      printf(" *");
    }
    printf("\n");
  }
}