/*
 * BuySellWidget.h
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#ifndef BUYSELLWIDGET_H_
#define BUYSELLWIDGET_H_

#include <Wt/WContainerWidget>
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>


class BuySellWidget: public Wt::WContainerWidget {
	std::string scrip_name;
	double ltp_;
	Wt::WLineEdit *qty_;
	
public:
	BuySellWidget(WContainerWidget*, std::string, double);
	virtual ~BuySellWidget();
};
 /* namespace IOTPApp */

#endif /* BUYSELLWIDGET_H_ */
