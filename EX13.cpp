#include<iostream>
#include<random>
using namespace std;

int throwDice(int x){
  srand((int) time(NULL)); 
  x = 1 + (rand() % 6);
  return x;
}

int playerTurn(int b,int score){
 int x,c,somme=0,i,l;
 score=0;
 /* x est le résultat de chaque lancé de dè
    c est le nombre de lancé réalisé
    s la somme des résultats des lancés
    b signifie joueur 1 ou joueur 2*/
    cout<<"Voulez-ous lancer un ou deux des?"<<endl<<"Veulliez taper 1 ou 2"<<endl;
    cin>>c;
   while (c != 1 && c!=2)
   {
    cout<<endl<<"Veuillez entrer un chiffre valide ( 1 ou 2 )"<<endl;
   }
   cout<<"Vous avez choisit de lancer le de "<<c<<" fois"<<endl;
   if(c=1){
    l = throwDice(x);
    cout<<"the player got number "<<l<<endl;
    score += somme;
    }
   else {
    for(i=1;i<c+1;i++){
    l = throwDice(x);
    if(somme!=l){
      somme+= l;
      cout<<"the player got number "<<l<<"and his score is augmented by "<<somme<<endl;}
    else 
      {score = score - (2*l);
      cout<<"the player's score is decresed by "<<(2*l)<<"and his current score is "<<score<<endl;}  
   }
   }
return score;
}

int main(){
  int score1, score2, player1, player2, winner;
  do{
    playerTurn(player1,score1);
    playerTurn(player2,score2);
  }while(score1 != 30 || score2 !=30);
  
  if(winner = score1 > score2)
   cout<<"the winner is player number 1"<<endl;
  else
   if(winner = score1 < score2)
   cout<<"the winner is player number 2"<<endl; 
   else 
     if(winner = (score1 == score2))
     cout<<"this match is drawn"<<endl;
  
  }
