/*
 * Copyright 2006 Free Software Foundation, Inc.
 *
 * This file is part of OpenCv Companion
 *
 * OpenCv Companion is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * OpenCv Companion is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenCv Companion; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

/*
 * This class gathers together all the test cases for pmt into
 * a single test suite.  As you create new test cases, add them here.
 */

#include <qa_pmt.h>
#include <qa_pmt_prims.h>
#include <qa_pmt_unv.h>

CppUnit::TestSuite *
qa_pmt::suite()
{
  CppUnit::TestSuite *s = new CppUnit::TestSuite("pmt");

  s->addTest(qa_pmt_prims::suite());
  s->addTest(qa_pmt_unv::suite());

  return s;
}