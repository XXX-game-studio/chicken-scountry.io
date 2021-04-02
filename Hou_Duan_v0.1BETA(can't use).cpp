#include <winsock2.h>
#pragma comment (lib, "ws2_32.lib")
#include<windows.h>
#include<time.h>
#include<bits/stdc++.h>
using namespace std;
int Fang_kuai_map[7202],[7202];//一只动物占用一个方块 ,0表示没有东西，1表示有 
int Qu_Kuai_map[1201],[1201];//一个建筑占用一个区块 
int build_number=0;
int i,j,k,n,m;
struct animal
{
	int size;//鸡=1，鸡中鸡=4，鸡中鸡中鸡=9 
	int x,y;//坐标
	int ID;
	char bag[5]={};//背包,用一个ASKII字符表示 
	int HP,AKT,AKTRange;
}This_animal[65536];
struct builds
{
	int x,y;
	int ID;
	int type;
	int HP;
	int build_time;
}This_builds[65536];
class animals
{
	int time;
	void move(int This_animals_ID,int x,int y)
	{
		if(Fang_Kuai_map[x][y]==0)
		{
			if(This_animal[This_animals_ID].size==1)
			{
				Fang_Kuai_map[This_animal[This_animals_ID].x][This_animal[This_animals_ID].y]=0;
				Fang_Kuai_map[x][y]=1;
			}
			else if(This_animal[This_animals_ID].size==4)
			{
				Fang_Kuai_map[This_animal[This_animals_ID].x][This_animal[This_animals_ID].y]=0;
				Fang_Kuai_map[This_animal[This_animals_ID].x-1][This_animal[This_animals_ID].y]=0;
				Fang_Kuai_map[This_animal[This_animals_ID].x][This_animal[This_animals_ID].y-1]=0;
				Fang_Kuai_map[This_animal[This_animals_ID].x-1][This_animal[This_animals_ID].y-1]=0;
			}
			else if(This_animal[This_animals_ID].size==9)
		}
		
	}
	void AKT(int AKT_animals_ID, int This_animals_ID)//攻击 
	{
		if(This_animal[AKT_animals_ID].x>This_animal[This_animals_ID].x)//x> y>
		{
			if(This_animal[AKT_animals_ID].y>This_animal[This_animals_ID].y)
			{
				if(This_animal[AKT_animals_ID].x-This_animal[This_animals_ID].x<=This_animal[This_animals_ID].AKTRange)
				{
					if(This_animal[AKT_animals_ID].y-This_animal[This_animals_ID].y<=This_animal[This_animals_ID].AKTRange)
					{
						This_animal[AKT_animals_ID].HP-This_animal[This_animals_ID].AKT;
					}
				}
			}
		}
		else if(This_animal[AKT_animals_ID].x<This_animal[This_animals_ID].x)//x< y<
		{
			if(This_animal[AKT_animals_ID].y<This_animal[This_animals_ID].y)
			{
				if(This_animal[This_animals_ID - This_animal[AKT_animals_ID].x].x<=This_animal[This_animals_ID].AKTRange)
				{
					if(This_animal[This_animals_ID].y - This_animal[AKT_animals_ID].y<=This_animal[This_animals_ID].AKTRange)
					{
						This_animal[AKT_animals_ID].HP-This_animal[This_animals_ID].AKT;
					}
				}
			}
		}
		else if(This_animal[AKT_animals_ID].x<This_animal[This_animals_ID].x)//x< y>
		{
			if(This_animal[AKT_animals_ID].y>This_animal[This_animals_ID].y)
			{
				if(This_animal[This_animals_ID - This_animal[AKT_animals_ID].x].x<=This_animal[This_animals_ID].AKTRange)
				{
					if(This_animal[AKT_animals_ID - This_animal[This_animals_ID].y].y<=This_animal[This_animals_ID].AKTRange)
					{
						This_animal[AKT_animals_ID].HP-This_animal[This_animals_ID].AKT;
					}
				}
			}
		}
		else if(This_animal[AKT_animals_ID].x>This_animal[This_animals_ID].x)//x> y<
		{
			if(This_animal[AKT_animals_ID].y<This_animal[This_animals_ID].y)
			{
				if(This_animal[AKT_animals_ID].x - This_animal[This_animals_ID].x<=This_animal[This_animals_ID].AKTRange)
				{
					if(This_animal[This_animals_ID].y - This_animal[AKT_animals_ID].y<=This_animal[This_animals_ID].AKTRange)
					{
						This_animal[AKT_animals_ID].HP-This_animal[This_animals_ID].AKT;
					}
				}
			}
		}
		else if(This_animal[AKT_animals_ID].x=This_animal[This_animals_ID].x)//x= y=
		{
			if(This_animal[AKT_animals_ID].y=This_animal[This_animals_ID].y)
			{
				This_animal[AKT_animals_ID].HP-This_animal[This_animals_ID].AKT;
			}
		}
	}
	void building(int This_animals_ID,int build_type,int build_x,int build_y)
	{
		move
	}
};


int coderead()
int main()
{
	
}
