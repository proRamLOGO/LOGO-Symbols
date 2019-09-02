#include <conio.h>
#include <dos.h>
#include <math.h>
#include <stdio.h>

// void screen()
// {
// 	clrscr();
// 	textbackground(BLUE);
// 	textcolor(WHITE);
// }
/*
 BLACK        �  0  � Yes � Yes
 BLUE         �  1  � Yes � Yes
 GREEN        �  2  � Yes � Yes
 CYAN         �  3  � Yes � Yes
 RED          �  4  � Yes � Yes
 MAGENTA      �  5  � Yes � Yes
 BROWN        �  6  � Yes � Yes
 LIGHTGRAY    �  7  � Yes � Yes
 DARKGRAY     �  8  � No  � Yes
 LIGHTBLUE    �  9  � No  � Yes
 LIGHTGREEN   � 10  � No  � Yes
 LIGHTCYAN    � 11  � No  � Yes
 LIGHTRED     � 12  � No  � Yes
 LIGHTMAGENTA � 13  � No  � Yes
 YELLOW       � 14  � No  � Yes
 WHITE        � 15  � No  � Yes
���������������������������������
 BLINK        �128  � No    ***
*/
//HEADERS START--------------------------------------

void headers(int x) {
    // screen();

    if (x == 0) {
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - -                       - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - -         LOGOs         - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - -        SYMBOLS        - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - -                       - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - -  Press any key  - - - - - - - - - - - - - - - - \n\n");
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    }

    if (x == 1) {
        printf("--------------------------------------------------------------------------------\n");
        printf("------------------------------- LOGO's SYMBOLS ---------------------------------\n");
        printf("--------------------------------------------------------------------------------");
    }

    if (x == 2) {
        printf("\n\n|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n\n");
        printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-| LOGO's SYMBOLS |-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
        printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|");
    }
}
//HEADERS ENDS----------------------------------------

void settings() {
    int a, tc, bc;
    headers(2);
    printf("\n\n                                     SETTINGS\n");
    printf("\n\n1. Account Settings");
    printf("\n\n2. Text Clour");
    printf("\n\n3. Background color");
    printf("\n\n4. Headers ");
    scanf("%d", &a);
    if (a == 1) {
        headers(1);
        printf("\n                                ACCOUNT SETTINGS\n");
        printf("\n\n NAME         :");
        //U LEFT HERE
        printf("\n\n AGE          :");
        printf("\n\n NATIONALITY  :");
    } else if (a == 2)
    /*
		BLACK        �  0  � Yes � Yes
		BLUE         �  1  � Yes � Yes
		GREEN        �  2  � Yes � Yes
		CYAN         �  3  � Yes � Yes
		RED          �  4  � Yes � Yes
		MAGENTA      �  5  � Yes � Yes
		BROWN        �  6  � Yes � Yes
		LIGHTGRAY    �  7  � Yes � Yes
		DARKGRAY     �  8  � No  � Yes
		LIGHTBLUE    �  9  � No  � Yes
		LIGHTGREEN   � 10  � No  � Yes
		LIGHTCYAN    � 11  � No  � Yes
		LIGHTRED     � 12  � No  � Yes
		LIGHTMAGENTA � 13  � No  � Yes
		YELLOW       � 14  � No  � Yes
		WHITE        � 15  � No  � Yes
		��������������������������������
		BLINK        �128  � No    ***
*/

    {
        headers(1);
        printf("\n                              TEXT COLOR SETTINGS\n");
        printf("\n\n CURRENT         :  &s", &tc);
        //U LEFT HERE
        printf("\n\n OTHER OPTIONS:");
        printf("\n\n BLUE :");
        //BLUE BLACK
    } else if (a == 3) {
    } else if (a == 4) {
    }
}

//ERROR STARTS-------------------------------------
void error(char str[30]) {
    headers(1);
    printf("\n\n\n\n\n\n\n                      Please choose the correct option %s !", str);
    getch();
}
//ERROR ENDS-----------------------------------------

//-------------------------------------------------FORMULA FUNCTIONS-----------------------------------------------
//-------------------------------1---------------------------------
float addition() {
    float a, k, n;
    printf("\n                            ARITHMETICS > ADDITION\n\n");
    printf("\nYou have chose Addition. Please provide the numbers which you want to add. Either give a space between the numbers or enter the second number in next line.\n\n");
    scanf("%f%f", &a, &k);
    n = a + k;
    printf("\n\n");
    printf("The sum of your 2 numbers is %f.", n);
    printf("\n\n");
    printf("%f  +  %f  =  %f", a, k, n);
    return n;
}
//---------------------------------------------
float subtraction() {
    float a, k, n;
    printf("\n                          ARITHMETICS > SUBTRACTION");
    printf("\n\n\n");
    printf("You have chose Subtraction. First provide the number from which you want to subtract and then the number to be subtracted. Either give a space between the numbers or enter the second number in next line.");
    printf("\n\n");
    scanf("%f%f", &a, &k);
    n = a - k;
    printf("\n\n");
    printf("The difference of your 2 numbers is %f.", n);
    printf("\n\n");
    printf("%f  -  %f  =  %f", a, k, n);
    return n;
}
//---------------------------------------------
float multiply() {
    float a, k, n;
    printf("\n			  ARITHMETICS > MULTIPLICATION\n\n");
    printf("\nYou have chose Multiplication. Please provide the numbers which you want to multiply. Either give a space between the numbers or enter the second number in next line.\n\n");
    scanf("%f%f", &a, &k);
    n = a * k;
    printf("\n\n\nThe product of your 2 numbers is %f.", n);
    printf("\n\n");
    printf("%f  X  %f  =  %f", a, k, n);
    return n;
}
//---------------------------------------------
float divide() {
    float a, k, n;
    printf("\n                            ARITHMETICS > DIVISION\n\n");
    printf("\nYou have chose Division. Please provide the Dividend and then the Divisor.\n\n");
    printf("\n1.Dividend  =  ");
    scanf("%f", &a);
    printf("\n2.Divisor  =  ");
    scanf("%f", &k);
    n = a / k;
    printf("\n\n\nThe quotient of your 2 numbers is %f.", n);
    printf("\n\n\n         %f                ", a);
    printf("\n  --------------------  =  %f", n);
    printf("\n         %f               ", k);
    return n;
}
//------------------2------------------------------------------------
float squarexp() {
    float a, n;
    printf("                              EXPONENTS > SQUARE\n");
    printf("\n\nYou chose to find out the square of a certain number. Kindly give the number now.\n\n");
    scanf("%f", &a);
    n = a * a;
    printf("\n\nThe square of your number is %f.", n);
    return n;
}

//--------------------------------------------

float squareroot() {
    float a, n;
    printf("                            EXPONENTS > SQUARE ROOT\n");
    printf("\n\nYou chose to find out the square root of a certain number. Kindly give the number now.\n\n");
    scanf("%f", &a);
    n = sqrt(a);
    printf("\n\nThe square of your number is %f", n);
    return n;
}

float cubexp() {
    float a, n;
    printf("                               EXPONENTS > CUBE\n");
    printf("\n\nYou chose to find out the cube of a certain number. Kindly give the number now.\n\n");
    scanf("%f", &a);
    n = a * a * a;
    printf("\n\nThe cube of your number is %f.", n);
    return n;
}

float cuberoot() {
    float a, n;
    printf("                             EXPONENTS > CUBE ROOT\n");
    printf("\n\nYou chose to find out the cube root of a certain number. Kindly give the number now.\n\n");
    scanf("%d", &a);
    n = pow(a, 1.0 / 3.0);
    n = n + 1;
    printf("\n\nThe cube root of your number is %d.", n);
    return n;
}
//----------------------------------------------------------

int square() {
    float s, area, peri;
    printf("                     MENSURATION > 2-DIMENSIONAL > SQUARE\n\n");
    printf("\nYou have chose SQUARE as your 2D figure. Now please give the side.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
    printf("Side of Square  =  ");
    scanf("%f", &s);
    peri = 4 * s;
    area = s * s;
    printf("\n\nThe area of your square is %f units and perimeter is %f units", area, peri);
    return area, peri;
}

/*
int rectangle()
{
	float l,b,area,peri;
	printf("                   MENSURATION > 2-DIMENSIONAL > RECTANGLE\n\n");
	printf("\nYou have chose RECTANGLE as your 2D figure. Now please give the following:\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurments only.\n\n");
	printf("1. Length  =  ");
	scanf("%f",&l);
	printf("\n2. Breadth  =  ");
	scanf("%f",&b);
	peri=l+l+b+b;
	area=l*b;
	printf("\n\nThe area of your rectangle is %f units and perimeter is %f units.",area,peri);
	return area,peri;
}


int circle()
{
	float pie=3.14,r,area,peri;
	printf("		     MENSURATION > 2-DIMENSIONAL > CIRCLE\n\n");
	printf("\nYou have chose CIRCLE as your 2D figure. Now please give the radius.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
	printf("Radius  =  ");
	scanf("%f",&r);
	peri=2*pie*r;
	area=pie*r*r;
	printf("\n\nThe area of your circle is %f units and circumfence is %f units",area,peri);
	return area,peri;
}
*/

int triangle() {
    float x, y, z, s, area, peri;
    printf("               	   MENSURATION > 2-DIMENSIONAL > TRIANGLE\n\n");
    printf("\nYou have chose TRIANGLE as your 2D figure. Now please provide the sides of triangle. Kindly give a space between the sides on enter them in seperate lines.\n\n");
    scanf("%f%f%f", &x, &y, &z);

    peri = x + y + z;
    s = peri / 2;
    area = sqrt(s * (s - x) * (s - y) * (s - z));

    headers(1);
    printf("               	   MENSURATION > 2-DIMENSIONAL > TRIANGLE\n\n");
    printf("\nThe area of your triangle is %f units.\n", area);
    printf("\n\nThe perimeter of your triangle is %f units.\n", peri);
    return peri, area;
}

int parallel() {
    float l, b, area, peri;
    printf("		 MENSURATION > 2-DIMENSIONAL > PARALLELOGRAM\n");
    printf("\n\nYou have chose PARALLELOGRAM as your 2D figure. Now please give the following:\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurments only.\n\n");
    printf("1. Length  =  ");
    scanf("%f", &l);
    printf("\n2. Base  =  ");
    scanf("%f", &b);
    peri = l + l + b + b;
    area = l * b;
    printf("\n\nThe area of your PARALLELORAM is %f units and perimeter is %f units.", area, peri);
    return area, peri;
}

int trapezium() {
    float l, b, h, a, k, area, peri;
    printf("		   MENSURATION > 2-DIMENSIONAL > TRAPEZIUM\n\n");
    printf("You have chose TRAPEZIUM as your 2D figure. Now please give the measurments of foloowing.\n* Note : Kindly do not provide any units like cms or kms. Enter the measurments only.\n\n");
    printf("1. Parallel Side No.1  =  ");
    scanf("%f", &l);
    printf("\n2. Parallel Side No.2  =  ");
    scanf("%f", &b);
    printf("\n3. Height   =  ");
    scanf("%f", &h);
    printf("\n4. Non-Parallel Side No.1  =  ");
    scanf("%f", &a);
    printf("\n5. Non-Parallel Side No.2  =  ");
    scanf("%f", &k);
    area = 0.5 * h * l + b;
    peri = l + b + a + k;
    headers(1);
    printf("\n		   MENSURATION > 2-DIMENSIONAL > TRAPEZIUM\n\n");
    printf("\nThe area of your trapezium is %f units & perimeter is %f units. ", area, peri);
    return area, peri;
}

int arp() {
    float n, s, area, peri;
    printf("             MENSURATION > 2-DIMENSIONAL > ANOTHER REGULAR POLYGON\n\n\n");
    printf("You have chose another regular polygon for your 2D figure. Now please give the following measurments of your regular polygon.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurments only.\n\n");
    printf("\n");
    printf("1. Number of sides  =  ");
    scanf("%f", &n);
    printf("\n2. Length of the side  =  ");
    scanf("%f", &s);
    peri = n * s;
    area = 1.72 * s;
    printf("\n\nThe area of your regular polygon is %f units and perimeter is %f units.", area, peri);
    return area, peri;
}

int cube() {
    float csa, tsa, volume, s;
    printf("                     MENSURATION > 3-DIMENSIONAL > CUBE\n\n\n");
    printf("You have chose CUBE as your 3D figure. Now please give the measurment of side.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
    printf("\nSide of Cube  =  ");
    scanf("%f", &s);
    tsa = 6 * s * s;
    csa = 4 * s * s;
    volume = s * s * s;

    headers(1);
    printf("\n                   MENSURATION > 3-DIMENSIONAL > CUBE\n\n");

    printf("\nSurface Areas and Volume of your CUBE are as follows :\n\n");
    printf("A. Total Surface Area  =  %f units\n", tsa);
    printf("\nB. Curved Surface Area  =  %f units\n", csa);
    printf("\nC. Volume  =  %f units", volume);
    return tsa, csa, volume;
}

float cuboid() {
    float l, b, h, csa, tsa, volume;
    printf("                    MENSURATION > 3-DIMENSIONAL > CUBOID\n\n");
    printf("\nYou have chose CUBOID as your 3D figure. Now please give the measurments of following.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
    printf("\n1. Length  =  ");
    scanf("%f", &l);
    printf("\n2. Breadth  =  ");
    scanf("%f", &b);
    printf("\n3. Height  =  ");
    scanf("%f", &h);
    tsa = 2 * (l * b + b * h + h * l);
    csa = 4 * l * b;
    volume = l * b * h;

    headers(1);

    printf("\n		      MENSURATION > 3-DIMENSIONAL > CUBOID\n\n");
    printf("\nSurface Areas and Volume of your CUBOID are as follows :\n\n");
    printf("\nA. Total Surface Area  =  %f units\n", tsa);
    printf("\nB. Curved Surface Area  =  %f units\n", csa);
    printf("\nC. Volume  =  %f units", volume);
    return tsa, csa, volume;
}

float cylinder() {
    float pie = 3.14, r, h, csa, tsa, volume;
    printf("	           MENSURATION > 3-DIMENSIONAL > CYLINDER\n\n");
    printf("\nYou have chose CYLINDER as your 3D figure. Now please give the measurments of following.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
    printf("\n1. Radius  =  ");
    scanf("%f", &r);
    printf("\n2. Height  =  ");
    scanf("%f", &h);
    tsa = 2 * pie * r * (h + r);
    csa = 2 * pie * r * h;
    volume = pie * r * r * h;

    headers(1);

    printf("\n");
    printf("		   MENSURATION > 3-DIMENSIONAL > CYLINDER");
    printf("\n\n\n");
    printf("Surface Areas and Volume of your CYLINDER are as follows :\n\n");
    printf("A. Total Surface Area  =  %f units\n\n", tsa);
    printf("B. Curved Surface Area  =  %f units\n\n", csa);
    printf("C. Volume  =  %f units", volume);
    return tsa, csa, volume;
}

float sphere() {
    float pie = 3.14, r, csa, tsa, volume;
    printf("	          MENSURATION > 3-DIMENSIONAL > SPHERE\n\n");
    printf("\nYou have chose SPHERE as your 3D figure. Now please give the radius.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
    printf("\nRadius of Sphere  =  ");
    scanf("%f", &r);
    csa = 4 * pie * r * r;
    volume = (4 / 3) * pie * r * r * r;

    headers(1);
    printf("\n     		    MENSURATION > 3-DIMENSIONAL > SPHERE\n");
    printf("\n\nSurface Areas and Volume of your SPHERE are as follows :\n\n");
    printf("\nA. Total Surface Area  =  %f units\n\nB. Curved Surface Area  =  %f units\n", tsa, csa);
    printf("\nC. Volume  =  %f units", volume);
    return tsa, csa, volume;
}

float cone() {
    float pie = 3.14, r, l, csa, tsa, volume;
    printf("		   MENSURATION > 3-DIMENSIONAL > CONE\n\n");
    printf("\nYou have chose CONE as your 3D figure. Now please give the measurments of following.\n\n* Note : Kindly do not provide any units like cms or kms. Enter the measurment only.\n\n");
    printf("1. Radius  =  ");
    scanf("%f", &r);
    printf("\n2. Length  =  ");
    scanf("%f", &l);
    tsa = pie * r * (l + r);
    csa = pie * r * l;
    volume = pie * r * r * l * 1 / 3;

    headers(1);
    printf("\n		     MENSURATION > 3-DIMENSIONAL > CONE\n");

    printf("\n\nSurface Areas and Volume of your CONE are as follows :\n\n");
    printf("\nA. Total Surface Area  =  %f units\n", tsa);
    printf("\nB. Curved Surface Area  =  %f units\n", csa);
    printf("\nC. Volume  =  %f units", volume);
    return tsa, csa, volume;
}

//---------------------------------------------------------------------
void arithmetics(char str[30]) {
    int d;
    headers(1);
    printf("                                 ARITHMETICS\n\n");
    printf("\nPlease select anyone of the following:\n\n");
    printf("1. Additon\n\n");
    printf("2. Subtraction\n\n");
    printf("3. Multiplication\n\n");
    printf("4. Division\n\n");

    scanf("%d", &d);
    headers(1);

    if (d == 1) {
        addition();
    } else if (d == 2) {
        subtraction();
    } else if (d == 3) {
        multiply();
    } else if (d == 4) {
        divide();
    } else {
        error(str);
        arithmetics(str);
    }
}
//---------------------------------
void exponents(char str[30]) {
    int e;
    headers(1);
    printf("                                  EXPONENTS\n\n");

    printf("\n\nPlease select anyone of the following.\n\n");
    printf("1. Square \n\n");
    printf("2. Square Root\n\n");
    printf("3. Cube \n\n");
    printf("4. Cube Root\n\n");

    scanf("%d", &e);
    headers(1);

    if (e == 1) {
        squarexp();
    } else if (e == 2) {
        squareroot();
    } else if (e == 3) {
        cubexp();
    } else if (e == 4) {
        cuberoot();
    } else {
        error(str);
        exponents(str);
    }
}

void mensuration(char str[30]) {
    int f, g, i;
    headers(1);
    printf("                                 MENSURATION\n");
    printf("\n\nPlease select anyone of the following.\n\n");
    printf("\n1. 2-Dimensional\n\n");
    printf("2. 3-Dimensional\n\n");
    scanf("%d", &f);
    //PUT
    if (f == 1) {
    D2:
        headers(1);
        printf("                         MENSURATION > 2-DIMENSIONAL\n\n");
        printf("\nYou have opt for 2-Dimensional figures. Time to chose the figure :\n\n");
        printf("1. Square\n\n");
        //printf("2. Rectangle\n\n");
        //printf("3. Circle\n\n");
        printf("4. Triangle\n\n");
        printf("5. Parellellogram\n\n");
        printf("6. Trapezium\n\n");
        printf("7. Other regular polygon\n");

        scanf("%d", &g);
        headers(1);

        if (g == 1) {
            square();
        } else if (g == 2) {
            //rectangle();
        } else if (g == 3) {
            //circle();
        } else if (g == 4) {
            triangle();
        } else if (g == 5) {
            parallel();
        } else if (g == 6) {
            trapezium();
        } else if (g == 7) {
            arp();
        } else {
            error(str);
            goto D2;
        }
    } else if (f == 2) {
    D3:
        headers(1);
        printf("                          MENSURATION > 3-DIMENSIONAL\n\n");
        printf("\nYou have opt for 3-Dimensional figures. Kindly tell what 3D figure would you like to use ?\n\n");
        printf("1. Cube\n");
        printf("\n2. Cuboid\n");
        printf("\n3. Cylinder\n");
        printf("\n4. Sphere\n");
        printf("\n5. Cone\n\n");

        scanf("%d", &i);
        headers(1);

        if (i == 1) {
            cube();
        } else if (i == 2) {
            cuboid();
        } else if (i == 3) {
            cylinder();
        } else if (i == 4) {
            sphere();
        } else if (i == 5) {
            cone();
        } else {
            error(str);
            goto D3;
        }
    } else {
        error(str);
        mensuration(str);
    }
}

float percent() {
    float a, k, n;
    headers(1);
    printf("                                % PERCENTAGE %\n");
    printf("\n\nPlease provide the following.\n\n");
    printf("1. Achieved  =  ");
    scanf("%f", &a);
    printf("\n2. Total  =  ");
    scanf("%f", &k);
    n = 100 * a / k;
    printf("\n\nThe percentage is %f %.\n\n", n);
    printf("\n    %f\n", a);
    printf("-----------------  X  100  =  %f", n);
    printf("\n    %f", k);
    return k;
}

float probability() {
    float a, k, n;
    headers(1);
    printf("                                 PROBABILITY\n");
    printf("\n\nPlease provide the following.\n\n");
    printf("\nA. Favourable Outcomes  =  ");
    scanf("%f", &a);
    printf("\nB. Total number of outcomes  =  ");
    scanf("%f", &k);
    n = a / k;
    printf("\n\n\nProbably the chances are %f.\n\n", n);
    printf("\n     %f\n", a);
    printf(" -----------------  =  %f", n);
    printf("\n     %f", k);
    return k;
}

//--------------------------------------------------------------------------------------------------------------

int main()

{
    int x = 0, p, c, w;
    int q, o, status, play;
    char str[30];

    // screen();
    headers(0);
    getch();
MENU0:
    headers(2);

    printf("\n\n\n\n\n\n                                  1. START\n\n");
    printf("\n                                  2. ABOUT\n\n");
    printf("\n                                  3. EXIT\n\n");

    scanf("%d", &p);

    if (p == 1) {
    MENU1:
        if (x == 0) {
            headers(2);
            printf("\n\n\n\n\n\n                            Enter your name please.\n\n");
            scanf("\n\n\n\n%s", &str);
        }

    MENU2:

        headers(1);
        printf("                              !! Welcome %s !!\n\n", str);
        printf("We are glad that you chose us for your assisstance.");
        printf(" With us you can perform both simple as well as complex calculations. ");
        printf("Now Press Any Key\n\n");
        if (x == 0) {
            getch();
        }
        printf("********************************************************************************\n");
        printf("Please choose one among the following.\n\n");
        printf("1. Arithmetics\n");
        printf("\n2. Exponents\n");
        printf("\n3. Percentage\n");
        printf("\n4. Probability\n");
        printf("\n5. Mensuration\n");

        scanf(" %d", &c);

        if (c == 1) {
            arithmetics(str);
        } else if (c == 2) {
            exponents(str);
        } else if (c == 3) {
            percent();
        } else if (c == 4) {
            probability();
        }
        else if (c == 5) {
            mensuration(str);
        } else {
            error(str);
            x = 1;
            goto MENU2;
        }

    }

    else if (p == 2) {
        headers(2);

        printf("\n\n\n");
        printf("                                    ABOUT");
        printf("\n\n\n");

        printf("This software is an alike of a calculator on which you can perform both simple as well as complex calculations. The functions here range from simple addition to complex mensuration. Also, this program is the first program written in C language by it's creator.\n\n");
        printf("This software LOGOs SYMBOLS is created by Mr. Shubh Bansal, the Managing Director and CEO of LOGO INDUSTRIES PVT. LTD. This software is his first ever program Shubh wrote in C Language though he didn't knew much about C Language at that time. He wrote this program in the age of just 15 yrs. Today this software is being sold across the world and he is the leading IT Tycoon today.\n");
        getch();

    abtnxt:
        headers(1);

        printf("\n\n\n");

        printf("\n                       Do you want to continue forward ?");
        printf("\n\n\n\n                                   1. YES");
        printf("\n\n                                     OR");
        printf("\n\n                                   2. NO\n\n\n\n				  ");
        scanf("%d", &w);

        if (w == 1) {
            goto MENU1;
        }

        else if (w == 2) {
            headers(1);
            printf("\n\n\n\n\n\n\n\n\n                                !!   BYE  !!");
            getch();
            exit(status - '0');
        } else {
            error(str);
            goto abtnxt;
        }
    }

    else if (p == 3) {
        //str=="";
        headers(2);
        printf("\n\n\n\n\n                        !! Thanks for using our software !!\n\n");
        printf("                                  !! %s !!\n\n", str);
        printf("                                   !! BYE !!\n\n");
        getch();
        exit(status - '0');
    }

    else {
        error("USER");
        goto MENU0;
    }

    getch();

    //goto MENU0;
    //settings();
    //getch();
}