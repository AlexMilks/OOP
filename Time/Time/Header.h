//Простой класс время
class Time {
private:
	int hour;
	int minute;
	int second;
public:
	//Конструктор по умолчанию
	Time() : hour(0), minute(0), second(0) {
	}

	Time(int a, int b, int c) : hour(a), minute(b), second(c) {
	}

	//Сложение времени
	Time operator+ (Time Time_2);

	//Вычитание времени
	Time operator- (Time Time_2);

	//Добавление секунд
	void AddingSeconds(int s);

	//Добавление минут
	void AddingMinutes(int s);

	//Добавление часов
	void AddingHours(int s);

	//Перевод времени в секунды
	int TimeInSecond();

	//Перевод времени в минуты
	int TimeInMinutes();

	//Перевод времени в часы
	int TimeInHour();

	//Конвертирование в строку
	void ConvertTimeToString();

	//Вывести на экран время
	void DisplayTheTime();
};