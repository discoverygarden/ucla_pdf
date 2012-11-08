<?php

/**
 *  @file Collection of utility functions for the custom UCLA pdf solution pack.
 */

/**
 *  Formats text from a datastream for html viewing.
 *
 *  @param $object FedoraObject
 *    Tuque object containing the datastream
 *  @param $dsid string
 *    The id of the datastream in the Tuque object that contains the text
 */
function ucla_pdf_format_datastream_text($object, $dsid) {
  return check_plain($object[$dsid]->content);
}

/**
 *  Serves the supplied text as a file for the user to download.
 *
 *  @param $text string 
 *    The text to serve as a txt file
 *  @param $filename string
 *    The filename to serve the text as  
 */
function ucla_pdf_serve_text_as_file($text, $filename) {
  header("Content-type: application/octet-stream");
  header("Content-Disposition: attachment; filename=\"{$filename}\"");
  echo $text;
}

