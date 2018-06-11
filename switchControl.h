class switchControl
{
public:
	bool control;

public:
	switchControl();
	~switchControl();

public:
	/* 램프의 점등설정 */
	void setControl(bool);
	/* 램프가 불이켜졌는가? */
	bool switchOn();
};

