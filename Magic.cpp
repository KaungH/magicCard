#include <iostream>
using namespace std;
int number;

const int deck = 1;                                                               

const int cards = 22;

int cardsrow [deck][cards] = {
    
    {0,1,2,3,4,5,6                                                          //NEEDED 22 numbers instead of 21 beaucse 1-21 looks nicer than 0-20
    ,7,8,9,10,11,12,13
    ,14,15,16,17,18,19,20,21}
  
  };
const int temp_number=21;                                                   //The purpose of temp is to hold the numbers temporary during the sorting 
const int temp_deck=1;                                                      //The temp consist entirely of zero
int temp[temp_deck][temp_number]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};//The zeros and the numbers swtich back and forth
                  
void distribution(){                                                        //This is distribution function 
  
    for ( int i=1;i<22;i++){  
      cout << cardsrow[0][i];                                               //This print out the array in the order of i
      if ( cardsrow[0][i] <9){
        cout<<"  ";                                                         //The purpose is to give single digits more spacing
      }
      else{
        cout<< " ";
      }
      if( i%3==0){                                                          // each time i become a number that is equal to 0 when % by 3, start new line
        cout << endl;
      }
    }
    cout<<"__________________"<< endl;
}
 

int j=1;                                                                   // The j and y is used as a counting number for second variables in loop 
int y=0;
void shuffle( int choice){
  if ( choice==1){
  
    for ( int i=0;i<22;i++){                                               //The loop is for all the numbers in one column swapped with temp vaules from 0-6 or 7-14 et
      
      i+=2;
      
      swap(cardsrow[0][i],temp[0][y]);                        //Example: (1,2,3)-->(0,0,0)==(0,0,0)-->(3,1,2). They arranged in a way for this game.
      y+=1;
      }
    
   y=7;
    
    for ( int i=-1;i<22;i++){
      
      i+=2;
  
      swap(cardsrow[0][i],temp[0][y]);
      y+=1;
      
      }
    
  

    y=14;
    for ( int i=1;i<22;i++){
      i+=2;
      
      swap(cardsrow[0][i],temp[0][y]);
      
      y+=1;
    }
    
    for( int i=0;i<21;i++){                                                   //After the numbers are rearranged in temp, once again numbers go back to origin.
      
      swap(cardsrow[0][i+1],temp[0][i]);
    }

    
}
y=0;
  if (choice==2){

    for ( int i=-1;i<22;i++){
      
      i+=2;
  
      swap(cardsrow[0][i],temp[0][y]);
      y+=1;
      
      }
    y=7;
    for ( int i=0;i<22;i++){
      
      i+=2;
      
      swap(cardsrow[0][i],temp[0][y]);

      y+=1;
      }
    y=14;
    for ( int i=1;i<22;i++){
      i+=2;
      
      swap(cardsrow[0][i],temp[0][y]);
      
      y+=1;
    }
    for( int i=0;i<21;i++){
      
      swap(cardsrow[0][i+1],temp[0][i]);
    }

  }
  y=0;
  if( choice==3){
    for ( int i=-1;i<22;i++){
      
      i+=2;
  
      swap(cardsrow[0][i],temp[0][y]);
      y+=1;
      
      }
    y=7;
    for ( int i=1;i<22;i++){
      i+=2;
      
      swap(cardsrow[0][i],temp[0][y]);
      
      y+=1;
    }
    y=14;
    for ( int i=0;i<22;i++){
      
      i+=2;
      
      swap(cardsrow[0][i],temp[0][y]);

      y+=1;
      }

     for( int i=0;i<21;i++){
      
      swap(cardsrow[0][i+1],temp[0][i]);
    }
  }
}

    
  

   

  
  


int user_decision;


int main(){
      
  while(user_decision!=1){cout << "Do you want to play Magic Cards? If so press 0 otherwise press 1 for exist: ";

  cin >> user_decision;

  if (user_decision == 0){
    distribution();
    cout << "Choose any number from 1 to 21 and KEEP it to yourself and answer truthfully to following questions" << endl;
    
  
    cout<< "Which column is your number in? 1, 2 or 3. Enter: ";

    cin >> number;

    shuffle(number);

    distribution();

    cout << "Which column is your number in, 1, 2, or 3. Enter: ";

    cin >> number;

    shuffle(number);

    distribution();

    cout << "Which column is your number in, 1, 2, or 3. Enter: ";

    cin >> number;

    shuffle(number);

    distribution();


    cout << "Using magic, I know that you picked: "<< cardsrow[0][11]<<" !"<<endl;
    
    cout << "Thank you for playing!"<<endl;



  }}
    
   if (user_decision == 1){
      
      cout<< "BYE"<<endl;
    }
  else {
      cout << "The player must press 0 or 1. Please try again"<<endl;
      
      cin >> user_decision;

}
}

