#include "osm-gps-map-compat.h"

/**
 * osm_gps_map_draw_gps:
 *
 * Deprecated: Use osm_gps_map_gps_add() instead.
 **/
void
osm_gps_map_draw_gps (OsmGpsMap *map, float latitude, float longitude, float heading)
{
    osm_gps_map_gps_add (map, latitude, longitude, heading);
}

/**
 * osm_gps_map_clear_gps:
 *
 * Deprecated: Use osm_gps_map_gps_clear() instead.
 **/
void
osm_gps_map_clear_gps (OsmGpsMap *map)
{
    osm_gps_map_gps_clear (map);
}

/**
 * osm_gps_map_add_track:
 *
 * Deprecated: Use osm_gps_map_track_add() instead.
 **/
void
osm_gps_map_add_track (OsmGpsMap *map, GSList *track)
{
    ;
}

/**
 * osm_gps_map_replace_track:
 *
 * Deprecated: Use osm_gps_map_track_remove() and osm_gps_map_track_add() or just
 * edit the #OsmGpsMapTrack object directly
 **/
void
osm_gps_map_replace_track (OsmGpsMap *map, GSList *old_track, GSList *new_track)
{
    ;
}

/**
 * osm_gps_map_clear_tracks:
 *
 * Deprecated: Use osm_gps_map_track_remove_all() instead.
 **/
void
osm_gps_map_clear_tracks (OsmGpsMap *map)
{
    osm_gps_map_track_remove_all (map);
}

/**
 * osm_gps_map_add_image_with_alignment:
 *
 * Deprecated: Use osm_gps_map_image_add_with_alignment() instead.
 **/
void
osm_gps_map_add_image_with_alignment (OsmGpsMap *map, float latitude, float longitude, GdkPixbuf *image, float xalign, float yalign)
{
    osm_gps_map_image_add_with_alignment (map, latitude, longitude, image, xalign, yalign);
}

/**
 * osm_gps_map_add_image:
 *
 * Deprecated: Use osm_gps_map_image_add() instead.
 **/
void
osm_gps_map_add_image (OsmGpsMap *map, float latitude, float longitude, GdkPixbuf *image)
{
    osm_gps_map_image_add_with_alignment (map, latitude, longitude, image, 0.5, 0.5);
}

/**
 * osm_gps_map_clear_images:
 *
 * Deprecated: Use osm_gps_map_image_remove_all() instead.
 **/
void
osm_gps_map_clear_images (OsmGpsMap *map)
{
    osm_gps_map_image_remove_all (map);
}

gboolean
osm_gps_map_remove_image (OsmGpsMap *map, GdkPixbuf *image)
{
    return FALSE;
}
