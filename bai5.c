#include <stdio.h>


main()
{
int ngay,thang,nam;
printf("nhap ngay:");
scanf("%d",&ngay);
printf("nhap thang:");
scanf("%d",&thang);
printf("nhap nam:");
scanf("%d",&nam);
 switch(thang) {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

                if( ngay>0 && ngay<=31){

                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);
                break;

                }

              else

               {
               printf("Ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);
               break;

                }

    case 4:
    case 6:
    case 9:
    case 11:

                if( ngay<=30 && ngay>0)
                {
                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);
                break;
                }


else
               {
 printf("Ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);
                        break;

                }

    case 2:

                if( (nam%4==0) &&(nam%100!=0) || (nam%400==0)){
                if  (ngay<=29)
                {

                printf("Ngay %d thang %d nam %d hop le\n",ngay,thang,nam);
                printf("day la nam nhuan");
                break;
                }
                else{
                printf("ngay %d thang %d nam %d  ko hop le\n",ngay,thang,nam);
                }
                }

                else
                {
                if (ngay<=28){
                printf("nhay %d thang %d nam %d hop le\n",ngay,thang,nam);

                }

                else {
                printf("ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam );
                }
                break;
                }

    default: printf("Ngay %d thang %d nam ko hop le\n",ngay,thang,nam);
    break;

    }



}
