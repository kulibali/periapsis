//
// $Id$
//
// Copyright (c) 2008, The Periapsis Project. All rights reserved. 
// 
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions are 
// met: 
// 
// * Redistributions of source code must retain the above copyright notice, 
//   this list of conditions and the following disclaimer. 
// 
// * Redistributions in binary form must reproduce the above copyright 
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the distribution. 
// 
// * Neither the name of the The Periapsis Project nor the names of its 
//   contributors may be used to endorse or promote products derived from 
//   this software without specific prior written permission. 
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS 
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED 
// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A 
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER 
// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#include "sim_vehicle_box.hpp"
#include "main_window.hpp"

#include "framework/textbox.hpp"

using namespace gsgl;
using namespace gsgl::data;
using namespace gsgl::platform;
using namespace gsgl::framework;

namespace periapsis
{

    sim_vehicle_box::sim_vehicle_box(widget *parent, int x, int y, int w, int h, const color & fg, const color & bg)
        : widget(parent, x, y, w, h, fg, bg), title_box(0), vehicle_box(0)
    {
        int title_height = 4 + main_window::FONT_SIZE * 3 / 2;

        title_box = new textbox(this, 
                                0, h - title_height, 
                                w, title_height,
                                fg, bg, main_window::FONT_FACE, main_window::FONT_SIZE * 4 / 3);
        title_box->get_text() = L"Vehicle";

        vehicle_box = new treebox(this,
                                  0, 0,
                                  w, h - (title_height + 4),
                                  fg, bg, main_window::FONT_FACE, main_window::FONT_SIZE);
    } // sim_vehicle_box::sim_vehicle_box()


    sim_vehicle_box::~sim_vehicle_box()
    {
        // title box and vehicle box are children, so will be deleted atomatically
    } // sim_vehicle_box::~sim_vehicle_box()


} // namespace periapsis
