/*
 * LogInWidget.cpp
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#include "LogInWidget.h"
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>

LogInWidget::LogInWidget(const std::string &name, WContainerWidget *parent):
	WContainerWidget(parent){
	this->addWidget(new Wt::WText("Username :  "));
	username_ = new Wt::WLineEdit(this);
	this->addWidget(new Wt::WBreak());
	this->addWidget(new Wt::WBreak());
	this->addWidget(new Wt::WText("Password :  "));
	password_ = new Wt::WLineEdit(this);
	this->addWidget(new Wt::WBreak());
	this->addWidget(new Wt::WBreak());
	Wt::WPushButton *button_log_in = new Wt::WPushButton("LogIn", this);

	// TODO Auto-generated constructor stub

}


LogInWidget::~LogInWidget() {
	// TODO Auto-generated destructor stub
}
 /* namespace IOTPApp */
