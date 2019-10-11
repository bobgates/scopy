/*
 * Copyright 2017 Analog Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file LICENSE.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef COLORED_QWIDGET_HPP
#define COLORED_QWIDGET_HPP

#include <QWidget>

namespace adiscope {
class ColoredQWidget : public QWidget {
public:
	explicit ColoredQWidget(QWidget *parent = nullptr);
	virtual ~ColoredQWidget();
};
} // namespace adiscope

#endif /* COLORED_QWIDGET_HPP */
