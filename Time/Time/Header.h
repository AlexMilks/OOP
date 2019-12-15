//������� ����� �����
class Time {
private:
	int hour;
	int minute;
	int second;
public:
	//����������� �� ���������
	Time() : hour(0), minute(0), second(0) {
	}

	Time(int a, int b, int c) : hour(a), minute(b), second(c) {
	}

	//�������� �������
	Time operator+ (Time Time_2);

	//��������� �������
	Time operator- (Time Time_2);

	//���������� ������
	void AddingSeconds(int s);

	//���������� �����
	void AddingMinutes(int s);

	//���������� �����
	void AddingHours(int s);

	//������� ������� � �������
	int TimeInSecond();

	//������� ������� � ������
	int TimeInMinutes();

	//������� ������� � ����
	int TimeInHour();

	//��������������� � ������
	void ConvertTimeToString();

	//������� �� ����� �����
	void DisplayTheTime();
};