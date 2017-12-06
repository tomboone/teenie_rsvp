# Teenie RSVP
Drupal 7 module for managing RSVPs on a wedding website

## Dependencies
* [Address Field](https://www.drupal.org/project/addressfield)
* [CTools](https://www.drupal.org/project/ctools)
* [Email Field](https://www.drupal.org/project/email)
* [Telephone](https://www.drupal.org/project/telephone)
* [Entity API](https://www.drupal.org/project/entity)
* [Entity Reference](https://www.drupal.org/project/entityreference)
* [Address Field Tokens](https://www.drupal.org/project/addressfield_tokens)
* [Token](https://www.drupal.org/project/token)
* [Views](https://www.drupal.org/project/views)

## Content Types
Teenie RSVP adds two node types to Drupal: Guest and RSVP.

The **Guest** content type is for maintaining a list of invited guests. Each Guest node should represent the entire invited party for that guest (i.e., an entire family: "John Smith & Jane Smith and family" or a plus one: "John Smith and guest). The content type includes fields for mailing address, telephone, and email, and also provides fields for the primary and secondary guests, a family/guest suffix (e.g., "and family"), and a count for expected guests beyond the primary and secondary. There is no UI provided for displaying or managing Guest nodes other than Drupal's own content backend.

The **RSVP** content type is for collecting and tracking guest RSVP responses. Each RSVP node must include an entity reference to a Guest node, and includes fields for specifying whether a party will or won't attend, the total number of guests in party, and any dietary restrictions in the party. The public UI for the RSVP system allows guests to search for their own Guest node and then provide an RSVP response referencing that Guest node. The form system is designed to allow only one RSVP per Guest node, so if an RSVP already exists for that guest, the user will be directed to email any changes.

## Personalization
At present the module still includes a few hard-coded personalized items in teenie_rsvp.module that you'll want to edit in your own installation:
1. Error messages when a user attempts to RSVP for a Guest who has already RSVP'd include my personal name and email address.
2. "Yes" RSVP confirmation message includes a reference to a specific city.
3. "No" RSVP confirmation message includes a reference to a specific city.
