#include <winsock2.h>
#pragma comment (lib, "ws2_32.lib")
#include<windows.h>
#include<time.h>
#include<bits/stdc++.h>
using namespace std;
/*
	by:cjnsasdf
	data:2021/5/2
	V0.2(BETA)
*/
int build_number=0;
int i,j,k,n,m;
struct map_c
{
	char TYPE[12];
	int ID;
}map[7202][7202];
struct animal_c
{
	int x,y,hp,TYPE,AKT,ID,FanWei,heavy,speed,AKT_speed;
	char bag[14];
}anmal[65536];
struct build_c
{
	int x,y,ID,hp;
	char TYPE,bag[25];
}build[65536];
struct WuPin_c
{
	char TYPE[3];
	int ID,in_ID,x,y;
	bool in_Box;
}WuPin[65536];
class Animals_class
{
	void move(int ID,int x,int y)
	{
		
	}
	void akt(int ID,int AKT_ID)
	{
		
	}
	void building(int ID,char Build_type,int Build_ID)
	{
		
	}
	void DiaoLuo(int ID[12],DiaoLuo_TYPE[12])
	{
		
	}
	void move_WuPin(ID,To_ID)
	{
		
	}
	void use(ID)
	{
		
	} 
};
class Build_class
{
	void ShenChan(ID,TYPE[5])
	{
		
	}
	void move_WuPin(ID,To_ID)
	{
		
	}
	void DiaoLuo(ID,TYPE)
	{
		
	} 
};
char Web_in(text)
{
	
}
char Web_out(text)
{
	
}
char Search(TYPE)
{
	
}
void Build_MAP(x,y,to_x,to_y)
{
	
}
void coderead(code[151])
{
	
}
int main()
{
	
}
