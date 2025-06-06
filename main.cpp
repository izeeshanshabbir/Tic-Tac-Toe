#include <iostream>

using namespace std;

class tic_tak{
     public:
         char myArray [9] = {'1','2','3','4','5','6','7','8','9'};
         char firstTurn = 'X';
    void header(){
        system("CLS");

        cout<<" ___ "<<"___"<<" ___"<<endl;
        cout<<"| "<<myArray[0]<<" | "<<myArray[1]<<" | "<<myArray[2]<<" |"<<endl;
        cout<<" ___ "<<"___"<<" ___"<<endl;
        cout<<"| "<<myArray[3]<<" | "<<myArray[4]<<" | "<<myArray[5]<<" |"<<endl;
        cout<<" ___ "<<"___"<<" ___"<<endl;
        cout<<"| "<<myArray[6]<<" | "<<myArray[7]<<" | "<<myArray[8]<<" |"<<endl;
        cout<<" ___ "<<"___"<<" ___"<<endl;

        cout<<"Player 1 = 'X'"<<endl;
        cout<<"Player 2 = 'O'"<<endl;
        cout<<"______________"<<endl;

    }


    void playerInput(){


        int n;

            while(win()){
                    if(firstTurn=='X'){
                cout<<"Player 1 Choose Place"<<endl;
                cin>> n;
                if(myArray[n-1]=='X'||myArray[n-1]=='O'){
                        cout<<"ERROR! Place Occupied."<<endl<<"Try Again."<<endl;
                        firstTurn='X';
                    }else if(n<1||n>9){
                        cout<<"ERROR!!! Invalid Input"<<endl;
                        firstTurn='X';
                    }else{
                    myArray[n-1] = 'X';
                    header();
                    firstTurn='O';
                    }

                }else{
                cout<<"Player 2 Choose Place"<<endl;
                cin>> n;
                if(myArray[n-1]=='X'||myArray[n-1]=='O'){
                        cout<<"ERROR! Place Occupied."<<endl<<"Try Again."<<endl;
                        firstTurn='O';
                    }else if(n<1||n>9){
                        cout<<"ERROR!!! Invalid Input"<<endl;
                        firstTurn='O';
                    }else{
                    myArray[n-1] = 'O';
                    header();
                    firstTurn='X';
                    }

                }

    }
    }






    bool win(){

    if(myArray[0]==myArray[1]&&myArray[1]==myArray[2]||
       myArray[3]==myArray[4]&&myArray[4]==myArray[5]||
       myArray[6]==myArray[7]&&myArray[7]==myArray[8]||
       myArray[0]==myArray[4]&&myArray[4]==myArray[8]||
       myArray[2]==myArray[4]&&myArray[4]==myArray[6]||
       myArray[0]==myArray[3]&&myArray[3]==myArray[6]||
       myArray[1]==myArray[4]&&myArray[4]==myArray[7]||
       myArray[2]==myArray[5]&&myArray[5]==myArray[8]){
       if(firstTurn=='O'){
        cout<<"Player 1 WIN!!!"<<endl;
       }else{
       cout<<"Player 2 WIN!!!"<<endl;
       }
        return false;
       }else if(myArray[0]!='1'&&myArray[1]!='2'&&myArray[2]!='3'&&myArray[3]!='4'&&myArray[4]!='5'&&myArray[5]!='6'&&myArray[6]!='7'&&myArray[7]!='8'&&myArray[8]!='9'){
           cout<<"GAME DRAW"<<endl;
           return false;
       }else{
        return true;
        ;
    }
    }


};

int main()
{
    tic_tak obj;
        obj.header();
        obj.playerInput();


    return 0;
}
