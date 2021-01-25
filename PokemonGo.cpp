// PokemonGo.cpp : Defines the entry point for the console application.
//Created by: DJay
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned)time(0));//used in order to create random entries every time 
	int type, Pokemon,DP,DPO,HP,HPO,level,levelo,attype,attypeo,weakns,weaknso,random,ctr=0,tries=1;//To assign the Pokemon type,Pokemon selected,user's and opponent'sDamage points,Hit Points,level,attack type,weakness,random for storing value of random number,counter for keeping tack of attacks,tries for catching pokemon
	double attpoints1, attpoints2,newhp,newhpo;//To assign the attackpoints of user's and opponent's pokemons,newhitpoints,
	cout << "Which Pokemon type do you want?\n1.Fire\n2.Water\n3.Electric\n";
	cout << "Enter your choice in numbers:\t";
	cin >> type;//user enters in terms of number
	switch (type)
	{
	case 1:
		cout << "You have the following choices in fire type:\n1.Charizard\n2.Flareon\n3.Cyndaquil\n";
		cout << "Enter your Choice in numbers:\t";
		cin >> Pokemon;//user again enters in number
		break;
	case 2:
		cout << "You have the following choices in water type:\n1.Feraligatr\n2.Squirtle\n3.Poliwhirl\n";
		cout << "Enter your Choice in numbers:\t";
		cin >> Pokemon;//user again enters in number
		break;
	case 3:
		cout << "You have the following choices in electric type:\n1.Pikachu\n2.Jolteon\n3.Zapdos\n";
		cout << "Enter your Choice in numbers:\t";
		cin >> Pokemon;//user again enters in number
		break;
	default:
		cout << "THIS IS A WRONG CHOICE !!\n";//if value entered in number does not match
	}
	if (type == 1 || type == 2 || type == 3)//rest of the code executed only if type enterd is valid
	{
		switch (Pokemon)
		{
		case 1:
			if (type == 1)//matches with the type of pokemon
			{
				cout << "You have chosen charizard.\n";
				DP = 4;
				HP = 30;
				level = 3;
				attype = 2;
				weakns = 3;
			}
			else if (type == 2)//matches with the type of pokemon
			{
				cout << "You have chosen Feraligatr.\n";
				DP = 5;
				HP = 30;
				level = 3;
				attype = 1;
				weakns = 3;
			}
			else//matches with the type of pokemon
			{
				cout << "You have chosen Pikachu\n";
				DP = 3;
				HP = 20;
				level = 2;
				attype = 1;
				weakns = 1;
			}
			break;
		case 2:
			if (type == 1)//matches with the type of pokemon
			{
				cout << "You have chosen Flareon\n";
				DP = 7;
				HP = 30;
				level = 2;
				attype = 1;
				weakns = 2;
			}
			else if (type == 2)//matches with the type of pokemon
			{
				cout << "You have chosen Squirtle\n";
				DP = 3;
				HP = 20;
				level = 1;
				attype = 1;
				weakns = 3;
			}
			else//matches with the type of pokemon
			{
				cout << "You have chosen Jolteon\n";
				DP = 3;
				HP = 30;
				level = 2;
				attype = 1;
				weakns = 1;
			}
			break;
		case 3:
			if (type == 1)//matches with the type of pokemon
			{
				cout << "You have chosen cyndaquil\n";
				DP = 3;
				HP = 20;
				level = 1;
				attype = 1;
				weakns = 2;
			}
			else if (type == 2)//matches with the type of pokemon
			{
				cout << "You have chosen Poliwhirl\n";
				DP = 3;
				HP = 30;
				level = 2;
				attype = 1;
				weakns = 3;
			}
			else//matches with the type of pokemon
			{
				cout << "You have chosen Zapdos\n";
				DP = 5;
				HP = 40;
				level = 3;
				attype = 2;
				weakns = 1;
			}
			break;
		default:
			cout << "THIS IS A WRONG CHOICE !!\n";
		}
		if (Pokemon == 1 || Pokemon == 2 || Pokemon == 3)//enters if pokemon number entered is valid
		{
			cout << "Now you need to catch the pokemon !!! Get Ready !!\n";
			while (ctr != 1)//runs as long as ctr is not equal to one
			{
				cout << "Try number " << tries << endl;
				random = rand() % 3;//generates random number
				if (random == 0)
				{
					cout << "You have failed to catch the pokemon\nYou are not a good trainer !!\n";
				}
				else
				{
					cout << "You have caught the pokemon !!!\n";
					ctr = 1;
				}
				tries++;
			}
				cout << "Get Ready !! You are entering a gym !! You are going to fight now !!\n";
				cout << "Your possible opponents are :\n1.Beedrill\n2.Blissey\n3.Suicune\n4.Gigalith\n";
				cout << "Your final opponent is ";
				random = rand() % 4 + 1;//generates random number
				switch (random)
				{
				  case 1:
					  cout << "Beedrill !!";
					  HPO = 40;
					  DPO = 5;
					  levelo = 2;
					  attypeo = 1;
					  weaknso = 3;
					  if (attypeo == weakns)//if attack type of opponent matches weakness of user
					  {
						  if (level == 3)
							  attpoints2 = DPO + 0.5 * DPO;//calculated depending on level
						  else if (level == 2)
							  attpoints2 = DPO + 1 * DPO;//calculated depending on level
						  else if (level == 1)
							  attpoints2 = DPO + 2 * DPO;//calculated depending on level
					  }
					  else//if weakness does not match attack type
					  {
						  attpoints2 = DPO ;
					  }
					  if (attype == weaknso)//if attack type of user matches weakness of opponent
					  {
						  if (level == 1)
							  attpoints1 = DP + 0.5 * DP;//calculated depending on level
						  else if (level == 2)
							  attpoints1 = DP + 1 * DP;//calculated depending on level
						  else if (level == 3)
							  attpoints1 = DP + 2 * DP;//calculated depending on level
					  }
					  else//if weakness does not match attack type
					  {
						  attpoints1 = DP ;
					  }
					  break;
				  case 2:
					  cout << "Blissey !!";
					  HPO = 100;
					  DPO = 1;
					  levelo = 2;
					  attypeo = 0;
					  weaknso = 1;
					  if (attypeo == weakns)//if attack type of opponent matches weakness of user
					  {
						  if (level == 3)//calculated depending on level
							  attpoints2 = DPO + 0 * DPO;
						  else if (level == 2)//calculated depending on level
							  attpoints2 = DPO + 0.5 * DPO;
						  else if (level == 1)//calculated depending on level
							  attpoints2 = DPO + 1 * DPO;
					  }
					  else//if weakness does not match attack type
					  {
						  attpoints2 = DPO ;
					  }
					  if (attype == weaknso)//if attack type of user matches weakness of opponent
					  {
						  if (level == 1)//calculated depending on level
							  attpoints1 = DP + 1 * DP;
						  else if (level == 2)//calculated depending on level
							  attpoints1 = DP + 2 * DP;
						  else if (level == 3)//calculated depending on level
							  attpoints1 = DP + 3 * DP;
					  }
					  else//if weakness does not match attack type
					  {
						  attpoints1= DP;
					  }
					  break;
				  case 3:
					  cout << "Suicune !!";
					  HPO = 40;
					  DPO = 4;
					  levelo = 3;
					  attypeo = 2;
					  weaknso = 3;
					  if (attypeo == weakns)//if attack type of opponent matches weakness of user
					  {
						  if (level == 3)//calculated depending on level
							  attpoints2 = DPO + 1 * DPO;
						  else if (level == 2)//calculated depending on level
							  attpoints2 = DPO + 2 * DPO;
						  else if (level == 1)//calculated depending on level
							  attpoints2 = DPO + 3 * DPO;
					  }
					  else//if weakness does not match attack type
					  {
						  attpoints2 = DPO;
					  }
					  if (attype == weaknso)//if attack type of user matches weakness of opponent
					  {
						  if (level == 1)//calculated depending on level
							  attpoints1 = DP + 0 * DP;
						  else if (level == 2)//calculated depending on level
							  attpoints1 = DP + 0.5 * DP;
						  else if (level == 3)//calculated depending on level
							  attpoints1 = DP + 1 * DP;
					  }
					  else//if weakness does not match attack type
					  {
					      attpoints1 = DP;
					  }
					  break;
				  case 4:
					  cout << "Gigalith !!";
					  HPO = 30;
					  DPO = 7;
					  levelo = 2;
					  attypeo = 1;
					  weaknso = 2;
					  if (attypeo = weakns)//if attack type of opponent matches weakness of user
					  {
						  if (level == 3)//calculated depending on level
							  attpoints2 = DPO + 0.5 * DPO;
						  else if (level == 2)//calculated depending on level
							  attpoints2 = DPO + 1 * DPO;
						  else if (level == 1)//calculated depending on level
							  attpoints2 = DPO + 2 * DPO;
					  }
					  else//if weakness does not match attack type
					  {
						  attpoints2 = DPO;
					  }
					  if (attype == weaknso)//if attack type of user matches weakness of opponent
					  {
							  if (level == 1)//calculated depending on level
								  attpoints1 = DP + 0.5 * DP;
							  else if (level == 2)//calculated depending on level
								  attpoints1 = DP + 1 * DP;
							  else if (level == 3)//calculated depending on level
								  attpoints1 = DP + 2 * DP;
						  }
						  else//if weakness does not match attack type
						  {
							  attpoints1= DP;
						  }
					  break;
				}
				ctr = 1;
				newhpo = HPO;
				newhp = HP;
				while (newhpo > 0 && newhp > 0)//loop runs as long as hp of either opponent or user does not become zero or lower
				{
					newhpo = newhpo - attpoints1;
					newhp = newhp - attpoints2;
					cout << "\nAfter attack number " << ctr << "\nHitpoints remaining,\nYour Pokemon : " << newhp << "\nOpponent : " << newhpo;
					ctr++;
				}
				if (newhpo > newhp)//if hp of opponent is greater
				{
					cout << "\nYou lost the match !! Better luck next time !!\n";
				}
				else//if hp of user is greater
				{
					cout << "\nYou have won the match !! Congrats !!\n";
				}
		}
		cout << "GAME OVER !! \n";
	}
	system("pause");
    return 0;
}

