#include <iostreasm>

using namespace std
#define size 10;

class stack{

int arr1[size];


stack   {

int top=-1;

}





 int puch(int x){
if (top ==size-1){

    return -1;
}
else{

    arr1[++top]=x;
    return arr1[top];


}


 }






 int pop(int x){
    if(top<0){
        return -1;
    }


    else{
return arr1[top--];// هنا بياخد قيمه التوب الاول بعدين يطرح منها عشان بقا يشيل الي تحته



    }
    



 }

int print_topvalue(){

    return arr1[top]
}



}













// stack immplemention
int main(){

stack s1;
si.puch(3);
si.puch(8);
si.puch(7);







    return0;
}