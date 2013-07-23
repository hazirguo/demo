今天帮师姐调一个程序的BUG，师姐的程序中有个结构体直接赋值的语句，在我印象中结构体好像是不能直接赋值的，正如数组不能直接赋值那样，我怀疑这个地方有问题，但最后证明并不是这个问题。那么就总结一下C语言中结构体赋值的问题吧：

#结构体直接赋值的实现#
下面是一个实例：
```c
#include <stdio.h>

struct Foo {
  char a;
	int b;
	double c;
}foo1, foo2;

void struct_assign(void)
{
	foo2 = foo1;
}

int main()
{
	foo1.a = 'a';
	foo1.b = 1;
	foo1.c = 3.14;
	struct_assign();
	printf("%c %d %lf\n", foo2.a, foo2.b, foo2.c);

	return 0;	
}
```

