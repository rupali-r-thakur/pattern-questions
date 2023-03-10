
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

#include<stdio.h>
void main (){
  int row=5;
  for (int i=0; i<row; i++){
    for(int s=0; s<=row-i+1; s++){
      printf(" ");
    }
    for(int j=0; j<i+1; j++){
      printf("*");
    }
    printf("\n");
  }
}
