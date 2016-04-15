/*
 * PortFolioWidget.h
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#ifndef PORTFOLIOWIDGET_H_
#define PORTFOLIOWIDGET_H_

#include <Wt/WContainerWidget>
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>

struct PortFolioItem{
	std::string scrip_name;
	int quantity;
	int day;
	int month;
	int year;
};

class PortFolioWidget: public Wt::WContainerWidget {
public:
	PortFolioWidget(WContainerWidget *, std::vector<PortFolioItem>);
	virtual ~PortFolioWidget();
};

/* namespace IOTPApp */

#endif /* PORTFOLIOWIDGET_H_ */
