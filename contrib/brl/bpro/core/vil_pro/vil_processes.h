#ifndef vil_processes_h_
#define vil_processes_h_

#include <bprb/bprb_macros.h>
#include <bprb/bprb_func_process.h>

// execute and const functions
DECLARE_FUNC_CONS(vil_load_image_view_process);
DECLARE_FUNC_CONS(vil_save_image_view_process);
DECLARE_FUNC_CONS(vil_map_image_process);
DECLARE_FUNC_CONS(vil_gaussian_process);
DECLARE_FUNC_CONS(vil_gradient_process);
DECLARE_FUNC_CONS(vil_binary_image_op_process);
DECLARE_FUNC_CONS(vil_rgbi_to_grey_process);
DECLARE_FUNC_CONS(vil_convert_to_n_planes_process);
DECLARE_FUNC_CONS(vil_combine_grey_images_process);
DECLARE_FUNC_CONS(vil_load_from_ascii_process);
DECLARE_FUNC_CONS(vil_stretch_image_process);
DECLARE_FUNC_CONS(vil_image_pair_process);
DECLARE_FUNC_CONS(vil_load_image_view_binary_process);
DECLARE_FUNC_CONS(vil_save_image_view_binary_process);
DECLARE_FUNC_CONS(vil_map_image_binary_process);
DECLARE_FUNC_CONS(vil_crop_image_process);
DECLARE_FUNC_CONS(vil_crop_image_res_process);
DECLARE_FUNC_CONS(vil_threshold_image_process);
DECLARE_FUNC_CONS(vil_image_size_process);
DECLARE_FUNC_CONS(vil_two_planes_composite_process);
DECLARE_FUNC_CONS(bil_compass_edge_detector_process);
DECLARE_FUNC_CONS(vil_resample_process);
DECLARE_FUNC_CONS(vil_filter_image_process);
DECLARE_FUNC_CONS(vil_blob_detection_process);
DECLARE_FUNC_CONS(vil_pixelwise_roc_process);
DECLARE_FUNC_CONS(vil_pixelwise_roc_process2);
DECLARE_FUNC_CONS(vil_rgb_to_grey_process);
DECLARE_FUNC_CONS(vil_nitf_date_time_process);
DECLARE_FUNC_CONS(vil_nitf_remove_margin_process);
DECLARE_FUNC_CONS(vil_convert_pixel_type_process);
DECLARE_FUNC_CONS(vil_median_filter_process);
DECLARE_FUNC_CONS(vil_gradient_angle_process);
DECLARE_FUNC_CONS(vil_image_ssd_process);
DECLARE_FUNC_CONS(vil_image_mean_process);
DECLARE_FUNC_CONS(vil_image_range_process);
DECLARE_FUNC_CONS(vil_init_float_image_process);
DECLARE_FUNC_CONS(vil_init_byte_image_process);
DECLARE_FUNC_CONS(bil_create_raw_image_istream_process);
DECLARE_FUNC_CONS(bil_read_frame_process);
DECLARE_FUNC_CONS(bil_seek_frame_process);
DECLARE_FUNC_CONS(vil_pixel_value_process);
DECLARE_FUNC_CONS(vil_scale_and_offset_values_process);
DECLARE_FUNC_CONS(vil_set_float_image_pixel_process);
DECLARE_FUNC_CONS(vil_image_sum_process);
DECLARE_FUNC_CONS(vil_image_dilate_disk_process);
DECLARE_FUNC_CONS(vil_shadow_detection_process);
DECLARE_FUNC_CONS(vil_shadow_ridge_detection_process);
DECLARE_FUNC_CONS(vil_image_mean_and_variance_process);
DECLARE_FUNC_CONS(vil_mean_and_variance_image_process);
DECLARE_FUNC_CONS(vil_image_normalise_process);
DECLARE_FUNC_CONS(vil_debayer_BGGR_to_RGB_process);
DECLARE_FUNC_CONS(bil_create_arf_image_istream_process);
DECLARE_FUNC_CONS(bil_arf_read_frame_process);
DECLARE_FUNC_CONS(bil_arf_seek_frame_process);
DECLARE_FUNC_CONS(bil_read_CLIF07_data_process);
DECLARE_FUNC_CONS(vil_fill_holes_in_regions_process);
DECLARE_FUNC_CONS(vil_EO_IR_combine_process);
DECLARE_FUNC_CONS(vil_truncate_image_process);
DECLARE_FUNC_CONS(vil_grey_to_rgb_process);
DECLARE_FUNC_CONS(vil_threshold_max_image_process);
DECLARE_FUNC_CONS(vil_threshold_image_region_process);
DECLARE_FUNC_CONS(vil_mask_image_using_ids_process);
DECLARE_FUNC_CONS(vil_get_plane_process);
DECLARE_FUNC_CONS(vil_combine_planes_process);
DECLARE_FUNC_CONS(vil_block_entropy_process);
DECLARE_FUNC_CONS(vil_load_image_resource_process);
DECLARE_FUNC_CONS(vil_save_image_resource_process);
DECLARE_FUNC_CONS(vil_get_number_of_planes_process);
DECLARE_FUNC_CONS(vil_edge_detection_process);
DECLARE_FUNC_CONS(vil_binary_edge_detection_process);
DECLARE_FUNC_CONS(vil_BGR_to_RGB_process);
DECLARE_FUNC_CONS(vil_combine_planes_process2);
DECLARE_FUNC_CONS(vil_histogram_equalize_process);
DECLARE_FUNC_CONS(vil_invert_float_image_process);
DECLARE_FUNC_CONS(vil_combine_palnes_8_bands_process);
DECLARE_FUNC_CONS(vil_image_registration_process);
DECLARE_FUNC_CONS(vil_multi_plane_view_to_grey_process);
DECLARE_FUNC_CONS(vil_binarize_otsu_process);

#endif
