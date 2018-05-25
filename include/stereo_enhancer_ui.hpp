#ifndef STEREO_ENHANCER_UI_HPP
#define STEREO_ENHANCER_UI_HPP

#include <gtkmm/adjustment.h>
#include <gtkmm/button.h>
#include <gtkmm/comboboxtext.h>
#include <gtkmm/grid.h>
#include "plugin_ui_base.hpp"

class StereoEnhancerUi : public Gtk::Grid, public PluginUiBase {
   public:
    StereoEnhancerUi(BaseObjectType* cobject,
                     const Glib::RefPtr<Gtk::Builder>& refBuilder,
                     std::string settings_name);
    ~StereoEnhancerUi();

    static std::shared_ptr<StereoEnhancerUi> create(std::string settings_name);

    void reset();

   private:
    Gtk::Adjustment *input_gain, *output_gain;
    Gtk::ComboBoxText* middle_source;
};

#endif
