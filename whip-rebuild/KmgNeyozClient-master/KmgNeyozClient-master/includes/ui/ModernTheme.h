#ifndef KMGNEYOZ_MODERN_THEME_H
#define KMGNEYOZ_MODERN_THEME_H

// ============================================================================
// Kmg&Neyoz v2.0 - Modern UI Theme Design System
// Contemporary design tokens for client interface
// ============================================================================

namespace KmgNeyoz {
namespace UI {
namespace Theme {

    // PRIMARY COLOR PALETTE
    static constexpr unsigned int COLOR_SURFACE_900 = 0x0A0E27;    // Deep navy background
    static constexpr unsigned int COLOR_SURFACE_800 = 0x0F1424;    // Dark card background
    static constexpr unsigned int COLOR_SURFACE_700 = 0x161B35;    // Elevated surface
    static constexpr unsigned int COLOR_SURFACE_600 = 0x1E2449;    // Hover state

    // ACCENT COLORS (Modern gradient-ready)
    static constexpr unsigned int COLOR_PRIMARY_CYAN = 0x06D6D6;   // Bright cyan
    static constexpr unsigned int COLOR_PRIMARY_BLUE = 0x0066FF;   // Vivid blue
    static constexpr unsigned int COLOR_SECONDARY_PURPLE = 0x7C3AED;   // Modern purple
    static constexpr unsigned int COLOR_ACCENT_LIME = 0x84CC16;    // Contemporary lime

    // SEMANTIC COLORS
    static constexpr unsigned int COLOR_SUCCESS = 0x10B981;        // Success green
    static constexpr unsigned int COLOR_WARNING = 0xF59E0B;        // Warning amber
    static constexpr unsigned int COLOR_ERROR = 0xEF4444;          // Error red
    static constexpr unsigned int COLOR_INFO = 0x3B82F6;           // Info blue

    // TEXT COLORS
    static constexpr unsigned int COLOR_TEXT_PRIMARY = 0xF8FAFC;   // Near white
    static constexpr unsigned int COLOR_TEXT_SECONDARY = 0xCBD5E1;  // Muted gray
    static constexpr unsigned int COLOR_TEXT_TERTIARY = 0x94A3B8;   // Darker gray
    static constexpr unsigned int COLOR_TEXT_DISABLED = 0x64748B;   // Disabled gray

    // TYPOGRAPHY SCALE (Modern web-inspired)
    static constexpr int FONT_SIZE_XS = 12;       // Extra small
    static constexpr int FONT_SIZE_SM = 14;       // Small
    static constexpr int FONT_SIZE_BASE = 16;     // Base
    static constexpr int FONT_SIZE_LG = 18;       // Large
    static constexpr int FONT_SIZE_XL = 20;       // Extra large
    static constexpr int FONT_SIZE_2XL = 24;      // 2x large
    static constexpr int FONT_SIZE_3XL = 30;      // 3x large

    // FONT WEIGHTS
    static constexpr int FONT_WEIGHT_THIN = 100;
    static constexpr int FONT_WEIGHT_LIGHT = 300;
    static constexpr int FONT_WEIGHT_NORMAL = 400;
    static constexpr int FONT_WEIGHT_MEDIUM = 500;
    static constexpr int FONT_WEIGHT_SEMIBOLD = 600;
    static constexpr int FONT_WEIGHT_BOLD = 700;

    // SPACING SCALE (8px base unit)
    static constexpr int SPACING_0 = 0;
    static constexpr int SPACING_1 = 4;
    static constexpr int SPACING_2 = 8;
    static constexpr int SPACING_3 = 12;
    static constexpr int SPACING_4 = 16;
    static constexpr int SPACING_5 = 20;
    static constexpr int SPACING_6 = 24;
    static constexpr int SPACING_8 = 32;
    static constexpr int SPACING_10 = 40;

    // BORDER RADIUS (Modern soft corners)
    static constexpr int RADIUS_NONE = 0;
    static constexpr int RADIUS_SM = 4;
    static constexpr int RADIUS_MD = 8;
    static constexpr int RADIUS_LG = 12;
    static constexpr int RADIUS_XL = 16;
    static constexpr int RADIUS_2XL = 20;
    static constexpr int RADIUS_FULL = 9999;

    // SHADOWS (Depth system)
    // These would translate to filter: drop-shadow() in CSS equivalent
    static constexpr const char* SHADOW_NONE = "";
    static constexpr const char* SHADOW_SM = "0 1px 2px rgba(0,0,0,0.05)";
    static constexpr const char* SHADOW_MD = "0 4px 6px rgba(0,0,0,0.1)";
    static constexpr const char* SHADOW_LG = "0 10px 15px rgba(0,0,0,0.15)";
    static constexpr const char* SHADOW_XL = "0 20px 25px rgba(0,0,0,0.2)";

    // ANIMATION TIMINGS (Modern feel)
    static constexpr int DURATION_FAST = 100;      // ms
    static constexpr int DURATION_BASE = 200;      // ms
    static constexpr int DURATION_SLOW = 300;      // ms
    static constexpr int DURATION_SLOWER = 500;    // ms

    // EASING FUNCTIONS (Cubic Bezier equivalents)
    static constexpr const char* EASING_LINEAR = "linear";
    static constexpr const char* EASING_EASE_IN = "cubic-bezier(0.4, 0, 1, 1)";
    static constexpr const char* EASING_EASE_OUT = "cubic-bezier(0, 0, 0.2, 1)";
    static constexpr const char* EASING_EASE_IN_OUT = "cubic-bezier(0.4, 0, 0.2, 1)";

    // BREAKPOINTS (Responsive design)
    static constexpr int BREAKPOINT_SM = 640;     // Small devices
    static constexpr int BREAKPOINT_MD = 768;     // Medium devices
    static constexpr int BREAKPOINT_LG = 1024;    // Large devices
    static constexpr int BREAKPOINT_XL = 1280;    // Extra large

    // ============================================================================
    // COMPONENT PRESETS
    // ============================================================================

    struct ButtonStyle {
        unsigned int backgroundColor;
        unsigned int textColor;
        unsigned int hoverColor;
        unsigned int borderColor;
        int borderRadius;
        int paddingVertical;
        int paddingHorizontal;
    };

    // Modern Button Variants
    static const ButtonStyle BUTTON_PRIMARY = {
        COLOR_PRIMARY_CYAN,           // backgroundColor
        COLOR_SURFACE_900,            // textColor
        0x06B3B3,                     // hoverColor (darker cyan)
        COLOR_PRIMARY_CYAN,           // borderColor
        RADIUS_MD,                    // borderRadius
        SPACING_2,                    // paddingVertical
        SPACING_4                     // paddingHorizontal
    };

    static const ButtonStyle BUTTON_SECONDARY = {
        COLOR_SURFACE_700,            // backgroundColor
        COLOR_TEXT_PRIMARY,           // textColor
        COLOR_SURFACE_600,            // hoverColor
        COLOR_SURFACE_600,            // borderColor
        RADIUS_MD,                    // borderRadius
        SPACING_2,                    // paddingVertical
        SPACING_4                     // paddingHorizontal
    };

    static const ButtonStyle BUTTON_GHOST = {
        0x00000000,                   // backgroundColor (transparent)
        COLOR_TEXT_PRIMARY,           // textColor
        COLOR_SURFACE_700,            // hoverColor
        COLOR_TEXT_SECONDARY,         // borderColor
        RADIUS_MD,                    // borderRadius
        SPACING_2,                    // paddingVertical
        SPACING_4                     // paddingHorizontal
    };

    // ============================================================================
    // DISPLAY BRANDING
    // ============================================================================

    static constexpr const char* PRODUCT_NAME = "Kmg&Neyoz";
    static constexpr const char* PRODUCT_VERSION = "2.0 Modern";
    static constexpr const char* UI_GENERATION = "v2025.01 (Contemporary)";
    
    static constexpr const char* WINDOW_TITLE_FORMAT = "Kmg&Neyoz v2.0 - Modern Client Interface";
    static constexpr const char* CONSOLE_TITLE_FORMAT = "Kmg&Neyoz Client - Debug Console (Modern UI)";

} // namespace Theme
} // namespace UI
} // namespace KmgNeyoz

#endif // KMGNEYOZ_MODERN_THEME_H
