 1 /*Program to Explain all data types including signed and unsigned.*/
  2
  3 #include<stdio.h>
  4
  5 int main()
  6 {
  7         int a=10; //datatype which store integer values
  8         printf("Size of int=%zu bytes\n",sizeof(int));
  9         char ch='c'; //datatype which stores characeter(which stores ASCII equivalent of character)
 10         printf("Size of char=%zu bytes\n",sizeof(char));
 11         float v=3.25; //datatype which is used to store decimal value
 12         printf("Size of float=%zu bytes\n",sizeof(float));
 13         double d=12.36698445; //datatype used to store decimal values
 14         printf("Size of double=%zu bytes\n",sizeof(double));
 15         short int b=12; //which stores interger values but it allocates two bytes
 16         printf("Size of short int=%zu bytes\n",sizeof(short int));
 17         long int m=45; //which stores interger values but it allocates 8 bytes
 18         printf("Size of long int=%zu bytes\n",sizeof(long int));
 19         long double c=455.25454; //which stores decimal values but it allocates 16 bytes
 20         printf("Size of long double=%zu bytes\n",sizeof(long double));
 21         unsigned int s=10; //datataype which store interger values but only positive values, i.e from 0 to 2^32 -1
 22         printf("Size of unsigned int=%zu bytes\n",sizeof(unsigned int));
 23         unsigned char f='v'; //datatype used to store character,since unsigned value ranges from 0 to 255
 24         printf("Size of unsigned char=%zu bytes\n",sizeof(unsigned char));
 25
 26         return 0;
 27 }