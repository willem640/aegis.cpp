//
// footer.hpp
// **********
//
// Copyright (c) 2019 Sharon W (sharon at aegis dot gg)
//
// Distributed under the MIT License. (See accompanying file LICENSE)
//

#pragma once

#include "aegis/config.hpp"
#include <nlohmann/json.hpp>

namespace aegis
{

namespace gateway
{

namespace objects
{

/**\todo Needs documentation
 */
struct footer
{
    std::string text; /**<\todo Needs documentation */
    std::string icon_url; /**<\todo Needs documentation */
    std::string proxy_icon_url; /**<\todo Needs documentation */
};

/// \cond TEMPLATES
inline void from_json(const nlohmann::json& j, footer& m)
{
    if (j.count("text") && !j["text"].is_null())
        m.text = j["text"];
    if (j.count("icon_url") && !j["icon_url"].is_null())
        m.icon_url = j["icon_url"];
    if (j.count("proxy_icon_url") && !j["proxy_icon_url"].is_null())
        m.proxy_icon_url = j["proxy_icon_url"];
}

inline void to_json(nlohmann::json& j, const footer& m)
{
    j["text"] = m.text;
    j["icon_url"] = m.icon_url;
    j["proxy_icon_url"] = m.proxy_icon_url;
}
/// \endcond

}

}

}
