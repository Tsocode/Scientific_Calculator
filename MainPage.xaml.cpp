//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <sstream>
#include <math.h>
using namespace App19;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;
using namespace std;
// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
	trig = 0;
	op = 0;
	result = 0;
	op_mark = '$';
	PI = 3.142;
}
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	(void)e;	
}

void App19::MainPage::Button_0(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"0";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}



void App19::MainPage::Button_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"1";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}

void App19::MainPage::Button_2(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"2";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_3(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"3";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_4(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"4";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_5(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"5";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_6(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"6";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_7(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"7";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_8(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"8";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}


void App19::MainPage::Button_9(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if ((op_mark == 's' || op_mark == 'c' || op_mark == 't') && trig != 0)
	{
		show->Text = "";
	}
	wstring w(show->Text->Data());
	w += L"9";
	show->Text = String(w.c_str()).ToString();
	wstringstream convertor;
	convertor << w;
	convertor >> op;
	trig = 0;
}
void App19::MainPage::Button_add(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	show->Text = "";
	if (op_mark == '$' && result == 0)
	{
		result = op;
	}
	else if (op_mark == '+')
	{
		result += op;
	}
	else if (op_mark == '-')
	{
		result -= op;
	}
	else if (op_mark == '*')
	{
		result *= op;
	}
	else if (op_mark == '/')
	{
		result /= op;
	}
	op = 0;
	op_mark = '+';
}


void App19::MainPage::Button_multi(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	show->Text = "";
	if (op_mark == '$'&& result == 0)
	{
		result = op;
	}
	else if (op_mark == '+')
	{
		result += op;
	}
	else if (op_mark == '-')
	{
		result -= op;
	}
	else if (op_mark == '*')
	{
		result *= op;
	}
	else if (op_mark == '/')
	{
		result /= op;
	}
	op = 0;
	op_mark = '*';
}


void App19::MainPage::Button_square(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	result = op;
	show->Text = "";
	wstring w(show->Text->Data());
	w += L"^2";
	show->Text = String(w.c_str()).ToString();
	op_mark = 'z';
}


void App19::MainPage::Button_sin(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	wstring w(show->Text->Data());
	w += L"sin";
	show->Text = String(w.c_str()).ToString();
	op_mark = 's';
	trig++;
}


void App19::MainPage::Button_cos(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	wstring w(show->Text->Data());
	w += L"cos";
	show->Text = String(w.c_str()).ToString();
	op_mark = 'c';
	trig++;
}


void App19::MainPage::Button_tan(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	wstring w(show->Text->Data());
	w += L"tan";
	show->Text = String(w.c_str()).ToString();
	op_mark = 't';
	trig++;
}

void App19::MainPage::Button_equ(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (op_mark == '$'&& result == 0)
	{
		result = op;
	}
	else if (op_mark == '+')
	{
		result += op;
	}
	else if (op_mark == '-')
	{
		result -= op;
	}
	else if (op_mark == '*')
	{
		result *= op;
	}
	else if (op_mark == '/')
	{
		result /= op;
	}
	else if (op_mark == 's')
	{
		result = sin(op * PI / 180);
	}
	else if (op_mark == 't'&& op % 90 != 0)
	{
		result = tan(op * PI / 180);
	}
	else if (op_mark == 't'&& op % 90 == 0)
	{
		op_mark = 'p';
	}
	else if (op_mark == 'c')
	{
		result = cos(op * PI / 180);
	}
	else if (op_mark == 'z')
	{
		result = result*result;
	}
	if (op_mark == 'p')
	{
		show->Text = "undefined";
	}
	else
	{
		show->Text = result.ToString();
	}
	op = 0;
	op_mark = '$';

}






void App19::MainPage::Button_clr(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	result = 0;
	op = 0;
	op_mark = '$';
	show->Text = "";
	trig = 0;
}




void App19::MainPage::Button_div(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	show->Text = "";
	if (op_mark == '$'&& result == 0)
	{
		result = op;
	}
	else if (op_mark == '+')
	{
		result += op;
	}
	else if (op_mark == '-')
	{
		result -= op;
	}
	else if (op_mark == '*')
	{
		result *= op;
	}
	else if (op_mark == '/')
	{
		result /= op;
	}
	op = 0;
	op_mark = '/';
}
