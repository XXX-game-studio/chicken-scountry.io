#include <random>
#include <bits/stdc++.h>
using namespace std;
char Map_list[4096];
int Map_list_ID[4096];
int ID_list[100001];
struct Map_ChuangJian{
	int Type;
	int ID;
	int X,Y;
}Map[4096][4096];
struct Things_ChuangJian{
	int ID;
	int Bag[33];
	char name[32];
}Thing[100001];
int Random(int Fanwei_min,int Fanwei_max)
{
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(Fanwei_min,Fanwei_max);
	return distrib(gen);
}
int MemsetMap(int ID,int Type,int X,int Y)
{
	Map[X][Y].Type=Type;
	Map[X][Y].ID=ID;
	return 0;
}
int MemsetThing(int ID,int Bag[33],char name[32])
{
	Thing[ID].ID=ID;
	for(int i=0;i<33;i++)
	{
		Thing[ID].Bag[i]=Bag[i];
	}
	strcpy(Thing[ID].name,name);
	return 0;
}
int main()
{
    
}
