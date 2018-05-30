# SimpleFactory
 	利用简单工厂模式解决了父类并不知道具体要实例化子类哪一个具体子类的问题，
我在此实现了一个简单的计算器，只需要输入相关指定的宏（ADD,SUB,MUL,DIV），工
厂就实例化出合适的对象，通过多态，返回子类实现的运算方法的结果。而如果要加入
新的运算方式，只需要增加相应的子类，并重写父类的GetResult()方法，再在Factory
中的switch语句中增加分支。
	这就是简单工厂模式，很简单吧。