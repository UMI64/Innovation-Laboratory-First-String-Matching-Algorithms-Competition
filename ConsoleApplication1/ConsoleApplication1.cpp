#include "stdio.h"
#include "windows.h"
bool res[10];//结果保存在这里面
char string[] = "adsgdsfnbjkeafnhbdsjmkfhn<+asf.ne.,akwgnhv.jaksdnfcnv<+,dfdasfceahggita fdasdfeoghefghghsssasjhffasjht";
char keyword_0[] = "ghf";
char keyword_1[] = "asjht";
char keyword_2[] = "gita fd";
char keyword_3[] = "<+,d";
char keyword_4[] = "wasd";
char keyword_5[] = "fad";
char keyword_6[] = "";
char keyword_7[] = "eagahr tytyhb>rdfa";
char keyword_8[] = "ddf";
char keyword_9[] = "fddadc";
/*暴力匹配算法(参考用)*/
inline bool Contain(const char * str, const char * substr)
{
	const char * psub = substr;
	const char * pstr = str;

	while (*pstr)
	{
		const char * tmp = pstr;
		while (*tmp++ == *psub++)
			if (*psub == '\0')
				return true;
		psub = substr;
		pstr++;
	}
	return false;
}
int main()
{
	LARGE_INTEGER time_star;
	LARGE_INTEGER time_over;
	LARGE_INTEGER f;
	double time_run = 0;
	double time_res = 10000000;
    QueryPerformanceFrequency(&f);
	for (int j = 0; j < 20; j++)
	{
		for (int i = 0; i < 500; i++)
		{
			QueryPerformanceCounter(&time_star);
			/*将你的代码放在这区间*/
			res[0] = Contain(string, keyword_0);//可以删除
			res[1] = Contain(string, keyword_1);//可以删除
			res[2] = Contain(string, keyword_2);//可以删除
			res[3] = Contain(string, keyword_3);//可以删除
			res[4] = Contain(string, keyword_4);//可以删除
			res[5] = Contain(string, keyword_5);//可以删除
			res[6] = Contain(string, keyword_6);//可以删除
			res[7] = Contain(string, keyword_7);//可以删除
			res[8] = Contain(string, keyword_8);//可以删除
			res[9] = Contain(string, keyword_9);//可以删除
			/*区间结束*/
			QueryPerformanceCounter(&time_over);
			time_run += 1000000.0 / f.QuadPart * (time_over.QuadPart - time_star.QuadPart);
		}
		printf("%0.1fus\n", time_run);
		time_res = time_res > time_run ? time_run : time_res;
		time_run = 0;
	}
	printf("最好成绩:%0.1fus\n", time_res);
	for (int r = 0; r < 10; r++)
	{
		if (res[r]) printf("%d:T\n",r);
		else printf("%d:F\n", r);
	}
	system("pause");
}