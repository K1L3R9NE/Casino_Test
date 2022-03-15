//------------------------------------------------------------------------------------------------------------
//БІБЛІОТЕКИ--------------------------------------------------------------------------------------------------

#include <iostream> //basic
#include <string> //strings
#include <clocale> //Обязательно для функции setlocale()
#include <cstdlib> // rand, srand
#include <ctime> //time

using namespace std; //std::

setlocale(LC_ALL, "Russian");

//------------------------------------------------------------------------------------------------------------
//ЗМІННІ------------------------------------------------------------------------------------------------------

ЗМІННА                   РОЗМІР В БАЙТАХ                         ЗНАЧЕННЯ

char                           1               Символ ASCII

bool	                       1	           true або false

unsigned short int	           2	           від     0                   до     65 535

short int	                   2	           від     -32 768             до     32 767

unsigned long int	           4	           від     0                   до     4 294 967 295

long int	                   4	           від     -2 147 483 648      до     2 147 483 647

int (16 розрядів)	           2	           від     -32 768             до     32 767

int (32 розряди)	           4	           від     -2 147 483 648      до     2 147 483 647

unsigned int (16 розрядів)	   2	           від     0                   до     65 535

unsigned int (32 розряди)	   4	           від     0                   до     4 294 967 295

float	                       4	           від     1.2е-38             до     3.4е38

double	                       8	           від     2.2е-308            до     1.8е308

long double	                   10	           від     3.4е-4932           до     3.4е+4932

//-------------------------------------------------------------------------------------------------------------
//АРИФМЕТИЧНІ ОПЕРАТОРИ----------------------------------------------------------------------------------------

ОПЕРАТОР	      ОПИС	                   ПРИКЛАДИ

=              Привласнення 		  		a = b

+	           Додавання	          		a + b

-	           Віднімання	     	  		a - b

*	           Множення	              		a * b

/	           Ділення	              		a / b

%	           Остача від ділення	  		a % b

++	           Інкремент (збільшення значення змінної на 1)	a++

--	           Декремент (зменшення значення змінної на 1)	a--

//-------------------------------------------------------------------------------------------------------------
//ОПЕРАТОРИ ПОРІВНЯННЯ ТА ВІДНОШЕННЯ --------------------------------------------------------------------------

ОПЕРАТОР	      ОПИС	                   ПРИКЛАДИ

==			    Дорівнює					a == b

!=				Не дорівнює					a != b

>				Більше 						a > b

<				Менше                       a < b

>=				Більше дорівнює             a >= b

<=				Менше дорівнює              a <= b

//-------------------------------------------------------------------------------------------------------------
//ЛОГІЧНІ ОПЕРАТОРИ--------------------------------------------------------------------------------------------

ОПЕРАТОР	      ОПИС	                   ПРИКЛАДИ

!               Логічне (НЕ)                !a

&&		        Та (і)                      a && b

||              Або                         a || b

//-------------------------------------------------------------------------------------------------------------
//КОМЕНТАРІ----------------------------------------------------------------------------------------------------

// однострочний коментар 
/* багатострочний коментар */

//-------------------------------------------------------------------------------------------------------------
//СИНТАКСИС В ЛАПКАХ ТА КОНСОЛІ--------------------------------------------------------------------------------

В КОДІ                 РЕЗУЛЬТАТ                        ПОЯСНЕННЯ

\a					Звонок 							(!)

\b					Backspace  						(видаляє знак)

\f					Перевод страницы 				(перводить текст на одну строчку вниз)

\n					Новая строка 					(перводить текст на одну строчку вниз)

\r					Возврат каретки 

\t					Горизонтальная табуляция 		(Робить відступ в один tab)

\v					Вертикальная табуляция 			(перводить текст на одну строчку вниз)

\'					Одиночная кавычка				(')

\"					Двойная кавычка					(")

\\					Обратная косая черта		 	(\)

\?					Литерал вопросительного знака	(?)

//-------------------------------------------------------------------------------------------------------------
//СКОРОЧЕННЯ---------------------------------------------------------------------------------------------------

ІМЯ ОПЕРАТОРА	 				СИНТАКСИС	  		СЕНС

Додавання з присвоєнням			a += b		   		a = a + b

Віднімання з присвоєнням		a -= b				a = a - b

Множення з присвоєнням			a *= b				a = a * b

Ділення з присвоєнням			a /= b				a = a / b

Отримання остачі з присвоєнням	a %= b				a = a % b

//-------------------------------------------------------------------------------------------------------------
//#DEBUG-------------------------------------------------------------------------------------------------------

#define DEBUG 5                 //СТВОРЮЄМО DEBUG ЗМІННУ З ЗНАЧЕННЯМ 5				

#ifdef MACROS_NAME		 		//ПОЧАТОК ЯКЩО МАКРОС ОПРЕДЕЛЕН ТОДІ ВИКОНУЄТЬСЯ КОД 
	//code 1
#else							//ЯКЩО МАКРОС НЕ ОПРЕДЕЛЕН ТО ВИКОНУЄТЬСЯ КОД
	//code 1						
#endif							//ЗАКІНЧЕННЯ #ifdef

#ifndef MACROS_NAME 			//ЯКЩО МАКРОС НЕ ОПРЕДЕЛЕН ТОДІ ВИКОНУЄТЬСЯ КОД (як #ifdef, тільки навпаки)
	//code 2

#if DUBUG == 535				//ПОЧАТОК ПРАЦЮЄ ТІЛЬКИ Х МАТЕМАТИЧНИМИ ТА НУМЕРНИМИ ЗНАЧЕННЯМИ
	//code 3
#elif DEBUG == 53               //ЯКЩО МАКРОС НЕ ОПРЕДІЛИВСЯ І ВІДПОВІДАЄ ЗНАЧЕННЮ (ДО #IF, ДОДАЄТЬСЯ ELSE() -- #elif)
	//code 3

//-------------------------------------------------------------------------------------------------------------
//ОПЕРАТОРИ----------------------------------------------------------------------------------------------------

СИНТАКСИС						НАЗВА						ПОЯСНЕННЯ

a[b]					Індексація Масиву			ОП. з числом з масиву (a - імя масиву, [b] - вказіник на ячейку в масиву по порядку)

*p_x                    Змінна покажчик             Використовує значення силки змінної (int x = 5; 			)
&x																						(int *p_x = &x;			)
																						(p_x = 0000007E3A8FFA04;)
																						(*p_x = 5;				)

//----------------------------------------------------------------------------------------------------------------------------------------------
//ТЕРНАРНИЙ ОПЕРАТОР----------------------------------------------------------------------------------------------------------------------------

(a < 10) ? (a = 0) : (a = 1);	          Ця конструкція заміняє структуру if() else, де (condition) ? (true) : (false)
(a < 10) ? (a = 0) : (a > 10) ? (a = 1) : (a = 3);          До звичайной кончтрукції портібно добавити (condition) ? (true) : (false)

//----------------------------------------------------------------------------------------------------------------------------------------------
//if() else-------------------------------------------------------------------------------------------------------------------------------------

if (a < 10)
{
	//condition is true // action 1
}
else 
{
	//condition is false // action 2
}

//----------------------------------------------------------------------------------------------------------------------------------------------
//while-----------------------------------------------------------------------------------------------------------------------------------------

while (a < 10)
{
	//action 1
}

//----------------------------------------------------------------------------------------------------------------------------------------------
//switch----------------------------------------------------------------------------------------------------------------------------------------

switch (a)
{
	case 1:
		//action 1
		break;
	case 2:
		//action 2
		break;
	default:
		//another action
		break;
}

//----------------------------------------------------------------------------------------------------------------------------------------------
//do while--------------------------------------------------------------------------------------------------------------------------------------

do {
	//action 1
} 
while (a < 10);

//----------------------------------------------------------------------------------------------------------------------------------------------
//for-------------------------------------------------------------------------------------------------------------------------------------------

for (int i = 0; i < 10; i++) 
{
	//action 1
}

//----------------------------------------------------------------------------------------------------------------------------------------------
//function--------------------------------------------------------------------------------------------------------------------------------------

void myFunction() 
{
  //action 1
}

myFunction();

//----------------------------------------------------------------------------------------------------------------------------------------------
//function pointer------------------------------------------------------------------------------------------------------------------------------

void PoinerMyFunction ( (*func)() )					//тип функции(*имя указателя) (спецификация параметров);	
{

}												

PoinerMyFunction( OtherFunction() );

//----------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------

goto link;		link:								//створюємо силку   //переносим виконання коду до силки

int ARR[10];	ARR[5] = 2;							//створюємо масив   //п'ятій ячейці масиву присвоюємо значення 2

int b = 10;		int a = sizeof(b);					//створюємо змінну b, та надаємо їй значення 10   //змінна a дорівнює розміру змінної в байтах (4)

srand(time(0));    int a = rand() % 100;	 		//автоматическая рандомизация   //змінна a дорівнює рандомному числу від 0 до 100;   

cout << "Its a cout" << endl;						//виводим текст в консоль

cin >> a; 											//зчитуємо текст з консолі

char ARR[10] = "Hello";	 cout << strlen(arr);   	//створюємо charовий масив на 10 ячейок, та привласнюємо йому слово "Hello"   //виводимо кількість charових символів в масиві (кількість зайнятих ячейок)

string pib = "Name" + "SurName" + "Last Name";		//string як і інші змінні може додавати значення

//----------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------
//OOП-------------------------------------------------------------------------------------------------------------------------------------------

class Car 											//ми створили новий клас
{
public:
	int maxSpeed = 300;
	string mark = "Porche";
};										

Car taycan;

//----------------------------------------------------------------------------------------------------------------------------------------------
//PUBLIC: PRIVATE: PROTECTED:-------------------------------------------------------------------------------------------------------------------
public: 											//можна визвати в любому участку кода

private:											//видно тільки в тілі самого класу, в коді не можна визвати

protected:											

//----------------------------------------------------------------------------------------------------------------------------------------------
//GET & SET-------------------------------------------------------------------------------------------------------------------------------------

class Point 
{
private:
	int x;
	int y;

public:
	int GetX ()
	{
		return x;
	}

	void SetX(int valX)
	{
		x = valX;
	}

};