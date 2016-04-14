/*
 * LogInWidget.h
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#ifndef LOGINWIDGET_H_
#define LOGINWIDGET_H_

#include <Wt/WContainerWidget>



class LogInWidget: public Wt::WContainerWidget {
	Wt::WLineEdit *username_;
	Wt::WLineEdit *password_;
public:
	LogInWidget(const std::string &name, WContainerWidget *parent);
	virtual ~LogInWidget();

};
 /* namespace IOTPApp */

#endif /* LOGINWIDGET_H_ */
