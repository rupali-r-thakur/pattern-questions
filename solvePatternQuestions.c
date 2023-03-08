
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
   #include<stdio.h>
   void main(){
    int row=5;
    for (int i=row; i>0; i--){
      for(int j=0; j<i; j++){
        printf(" *");
      }
      printf("\n");
    }
   }
