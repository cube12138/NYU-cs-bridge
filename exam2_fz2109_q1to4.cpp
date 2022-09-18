/*Fangtong Zhao(fz2109)
Q1:
base:
for n=1,an=1 smaller than sqrt(2)^1;
for n=1,an=1 smaller than sqrt(2)^2;
induction:
for all the integer larger or equal to one and smaller ar equal to k, we assume ak smaller than sqrt(2)^k;
we will show that for k+1,a(k+1) smaller than sqrt(2)^(k+1):
from the left: for a(k+1) =ak+a(k-1) smaller than  sqrt(2)^k+a(k-1), we know that k-1 is in 1 to k this range, so a(k-1)smaller than sqrt(2)^(k-1), so
sqrt(2)^k+a(k-1)smaller than sqrt(2)^k+sqrt(2)^(k-1)=[sqrt(2)^(k-1)](sqrt(2)+1) which is smaller than [sqrt(2)^(k-1)](sqrt(2)^2)=sqrt(2)^(k+1).
so for k+1,a(k+1) smaller than sqrt(2)^(k+1).


Q2:
a:10*9*8*7: 10 ways for first digit of pin, 9 ways for second digit...
b:C(10,4):after choose 4 different numbers, there will be only one way to combine them because it is an increasing order.

Q3:
a:
probability of 2 dice are both even=1/2*1/2=1/4;
probability of other situations=1-1/4=3/4;
p(x=1)=1/4
p(x=2)=3/4*1/4=3/16
p(x=3)=3/4*3/4*1/4=9/64
p(x=4)=(3/4*3/4*3/4*1/4)+(3/4*3/4*3/4*3/4)=27/256+81/256=108/256=27/64

b:
E(x)=1*1/4+ 2*3/16 +3*9/64 +4*27/64=175/64=2.734375

Q4:
a:
theta(log n)
i=2^0, j=1 to 2^0      which is 2^1-1
i=2^1, j=1 to 2^1      which is 2^2-1
i=2^2, j=1 to 2^2      which is 2^3-1
i=2^3, j=1 to 2^3      which is 2^4-1
i=2^(log2(log n)), j=1 to 2^(log2(log n))      which is 2^(log2(log n)+1)-1

add all the right number:2^1-1 + 2^2-1 + 2^3-1 + ...+ 2^(log2(log n)+1)-1= 2^(log2(log n)+2)-log2(log n)
=4 *log n-log2(log n)
after simplilfily, theta(log n)


b:
1.arr in main is an address not an array number, so when he print it ,he will get the adress number.
and the function return arr which is not an pointer, it is an number, but int*first10squares is a pointer.
2.int arr[10]change to int * arr=new int[10];
*/
