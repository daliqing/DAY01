//edit:编辑
#include<iostream>
using namespace std;
//继承语法：class 子类(派生类) : 继承方式 父类(基类)
class BasePage
{
public:
	void header() {
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图...(公共底部）" << endl;
	}
	void leftList() {
		cout <<"Java、Python、C++、...（公共分类列表）" << endl;
	}
};
class CPP :public BasePage {
public:
	void content() {
		cout << "C++学习视频" << endl;
	}
};
class Java : public BasePage {
public:
	void content() {
		cout << "Java学习视频" << endl;
	}
};
class Python : public BasePage {
public:
	
	void content() {
		cout << "Python学习视频" << endl;
		}
	

};
void test01() {
	cout << "Java下载视频页面如下:" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.leftList();
	ja.content();
	cout << "-------------------------------------" << endl;
	cout << "CPP下载视频页面如下：" << endl;
	CPP c;
	c.header();
	c.footer();
	c.leftList();
	c.content();
	cout << "---------------------------------------" << endl;
	cout << "Python下载页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.leftList();
	py.content();
	cout << "------------------------------------------" << endl;
}
int main() {
	test01();
	student::student();//::表归属 student类的student无参构造函数
	student::student(int na, char na[20], float sc[3]) {
		no = n;
		name = na;
		for (int i = 0; i < 3; i++) {
			score[i] = sc[i];
		}
	};
	student s1;//定义对象的同时，构造函数被自动调用
	s1.display();
	return 0;

}
//构造函数：建立对象时对对象的成员进行初始化 【与类同名，无返回值，可以有多个，带参无参均可】
//析构函数：对象生命周期结束时回收对象
class student {
private:
	int no;
	string name;
	float score[3];
public:
	student();//无参构造函数
	student(int n, string na, float sc[3]);//有参构造函数
	void display();
};
