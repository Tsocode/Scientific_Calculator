//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace App19
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
	private:
		double PI;
		int trig;
		int op;
		float result;
		char op_mark;


	protected:
		virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
	private:
		void textBox_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
		void Button_equ(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_2(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_3(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_4(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_5(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_6(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_7(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_8(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_9(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_multi(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_square(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_sin(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_cos(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_tan(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_0(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_clr(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_add(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_div(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
