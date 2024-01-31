#include <stdio.h>
#include <stdlib.h>
struct Grade{
int Prog;
int Data;
int math;
int algo;
};
void    main()
{
    int id;
  struct Grade p1 ={90,70,40,80};
  struct Grade p2 ={56,78,23,89};
  struct Grade p3 ={89,12,49,76};
  struct Grade p4 ={88,99,55,77};
  struct Grade p5 ={34,65,89,98};
  struct Grade p6 ={30,76,89,56};
  struct Grade p7 ={43,76,33,21};
  struct Grade p8 ={12,54,54,76};
  struct Grade p9 ={90,98,54,87};
  struct Grade p10 ={93,72,41,87};
  printf("Enter Your Id From 3 Number :");
  scanf("%d", &id);
  switch(id){
  case 100 :
  printf("Your Grade In Programming is : %d \n" , p1.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p1.Data);
  printf("Your Grade In Discreat math is : %d \n" , p1.math);
  printf("Your Grade In Algorthim is : %d \n" , p1.algo);
  break;
  case 101 :
  printf("Your Grade In Programming is : %d \n" , p2.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p2.Data);
  printf("Your Grade In Discreat math is : %d \n" , p2.math);
  printf("Your Grade In Algorthim is : %d \n" , p2.algo);
  break;
  case 102 :
  printf("Your Grade In Programming is : %d \n" , p3.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p3.Data);
  printf("Your Grade In Discreat math is : %d \n" , p3.math);
  printf("Your Grade In Algorthim is : %d \n" , p3.algo);
  break;
  case 103 :
  printf("Your Grade In Programming is : %d \n" , p4.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p4.Data);
  printf("Your Grade In Discreat math is : %d \n" , p4.math);
  printf("Your Grade In Algorthim is : %d \n" , p4.algo);
  break;
  case 104 :
  printf("Your Grade In Programming is : %d \n" , p5.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p5.Data);
  printf("Your Grade In Discreat math is : %d \n" , p5.math);
  printf("Your Grade In Algorthim is : %d \n" , p5.algo);
  break;
  case 105 :
  printf("Your Grade In Programming is : %d \n" , p6.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p6.Data);
  printf("Your Grade In Discreat math is : %d \n" , p6.math);
  printf("Your Grade In Algorthim is : %d \n" , p6.algo);
  break;
  case 106 :
  printf("Your Grade In Programming is : %d \n" , p7.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p7.Data);
  printf("Your Grade In Discreat math is : %d \n" , p7.math);
  printf("Your Grade In Algorthim is : %d \n" , p7.algo);
  break;
  case 107 :
  printf("Your Grade In Programming is : %d \n" , p8.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p8.Data);
  printf("Your Grade In Discreat math is : %d \n" , p8.math);
  printf("Your Grade In Algorthim is : %d \n" , p8.algo);
  break;
  case 108 :
  printf("Your Grade In Programming is : %d \n" , p9.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p9.Data);
  printf("Your Grade In Discreat math is : %d \n" , p9.math);
  printf("Your Grade In Algorthim is : %d \n" , p9.algo);
  break;
  case 109 :
  printf("Your Grade In Programming is : %d \n" , p10.Prog);
  printf("Your Grade In Data Structre is : %d \n" , p10.Data);
  printf("Your Grade In Discreat math is : %d \n" , p10.math);
  printf("Your Grade In Algorthim is : %d \n" , p10.algo);
  break;
  default:
    printf("Wrong Id ");
    break;


  }
}
